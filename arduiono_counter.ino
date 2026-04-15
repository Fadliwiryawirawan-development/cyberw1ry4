/*
 * arduino_counter.ino
 * -------------------
 * Digital pulse counter with hardware-independent debouncing.
 * 
 * Features:
 *   - Counts rising edges on pin BUTTON_PIN (with external pull-down resistor)
 *   - Millis-based debounce — does NOT block with delay(), so other code
 *     can run freely in the main loop
 *   - Reset button on pin RESET_PIN clears the count
 *   - Serial output: count printed only when it changes (not every loop)
 *   - Built-in LED blinks once on each valid count increment
 *
 * Wiring:
 *   Counter button : pin 2  → external 10kΩ pull-down to GND
 *   Reset  button  : pin 3  → external 10kΩ pull-down to GND
 *   Built-in LED   : pin 13 (on-board)
 *
 * Serial monitor: 9600 baud
 */

// ── Pin definitions ────────────────────────────────────────────────────────────
#define BUTTON_PIN   2      // rising-edge counter input
#define RESET_PIN    3      // active-HIGH reset
#define LED_PIN      LED_BUILTIN

// ── Debounce timing ────────────────────────────────────────────────────────────
#define DEBOUNCE_MS  50     // minimum ms between two valid edges

// ── LED feedback ──────────────────────────────────────────────────────────────
#define LED_FLASH_MS 80     // how long the LED stays on per count

// ── State variables ───────────────────────────────────────────────────────────
static int      buttonState      = LOW;
static int      lastButtonState  = LOW;
static int      resetState       = LOW;
static int      lastResetState   = LOW;

static unsigned long lastDebounceTime  = 0;
static unsigned long lastResetDebounce = 0;
static unsigned long ledOnTime         = 0;

static long     count            = 0;
static bool     ledActive        = false;

// ── Setup ─────────────────────────────────────────────────────────────────────
void setup()
{
    pinMode(BUTTON_PIN, INPUT);   // external pull-down — no INPUT_PULLUP
    pinMode(RESET_PIN,  INPUT);   // external pull-down
    pinMode(LED_PIN,    OUTPUT);

    Serial.begin(9600);
    Serial.println("=== Pulse Counter Ready ===");
    Serial.println("Send 'r' over Serial to reset count.");
    Serial.print("Count: ");
    Serial.println(count);
}

// ── Loop ──────────────────────────────────────────────────────────────────────
void loop()
{
    unsigned long now = millis();

    // ── 1. Read and debounce the counter button ────────────────────────────
    int reading = digitalRead(BUTTON_PIN);

    if (reading != lastButtonState)
        lastDebounceTime = now;           // reset the debounce timer

    if ((now - lastDebounceTime) >= DEBOUNCE_MS)
    {
        // The reading has been stable for DEBOUNCE_MS — treat it as settled
        if (reading != buttonState)
        {
            buttonState = reading;

            // Only count the rising edge (LOW → HIGH)
            if (buttonState == HIGH)
            {
                count++;
                Serial.print("Count: ");
                Serial.println(count);

                // Trigger LED flash
                digitalWrite(LED_PIN, HIGH);
                ledOnTime  = now;
                ledActive  = true;
            }
        }
    }
    lastButtonState = reading;

    // ── 2. Read and debounce the reset button ────────────────────────────
    int resetReading = digitalRead(RESET_PIN);

    if (resetReading != lastResetState)
        lastResetDebounce = now;

    if ((now - lastResetDebounce) >= DEBOUNCE_MS)
    {
        if (resetReading != resetState)
        {
            resetState = resetReading;

            if (resetState == HIGH)
                resetCount();
        }
    }
    lastResetState = resetReading;

    // ── 3. Turn off LED after flash duration ────────────────────────────
    if (ledActive && (now - ledOnTime) >= LED_FLASH_MS)
    {
        digitalWrite(LED_PIN, LOW);
        ledActive = false;
    }

    // ── 4. Serial command handler ────────────────────────────────────────
    if (Serial.available())
    {
        char cmd = Serial.read();
        if (cmd == 'r' || cmd == 'R')
            resetCount();
    }
}

// ── Helpers ───────────────────────────────────────────────────────────────────

/**
 * resetCount() — clear the counter and notify via Serial.
 */
void resetCount()
{
    count = 0;
    Serial.println("Count reset to 0.");
}
