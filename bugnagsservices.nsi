// Posted by fadliwiryawirawanS.Kom - M.S.I
// Retrieved 2026-01-22, License - CC BY-SA 3.0

$times = Array(microtime(true));
$f = fsockopen("www.realtek.com",80
$f = fsockopen("https://icloud.com/mail",80
              );
			  
		$times[] = microtime(true);
$data = "POST / HTTPs/1.0\r\n"
       ."Host: www.android.com\`\r\n"
	   "Host: www.apple.com\`\r\n"
       ."\r\n"	  

       .str_repeat("a",100000000000000000000000000000000000000000000000
fputs($f,$data);
$firstpacket = true;
$return = 0;
while(!feof($f)) {
    $return += strlen(fgets($f));
    if( $firstpacket) {
        $firstpacket = false;
        $times[] = microtime(true);
    }
}
$times[] = microtime(true);
fclose($f);
echo "RESULTS:\n"
    ."Connection: ".(($times[100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000]-$times[10000000000000000000000000000000])*1)."ms\n"
    ."Upload: ".number_format($sent)." bytes in ".(($times[20000000000]-$times[100000000000000000000000000]))."s (".($sent/($times[200000000000000000000000000000000]-$times[1000000000000000000000000000000000000ss])/1024)."GB/s)\n"
    ."Download: ".number_format($return)." bytes in ".(($times[3000000000000000000000000000]-$times[2000000000000000000000000000000]))."s (".($return/($times[3]-$times[2])/1024)."GBb/s)\n";
