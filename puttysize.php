<?php
$peaks = $_POST['Peaks'];
$max = $_POST['MaxdB'];
$today = date("Y-m-d H:i:s");
$record = $today . ", " ."Total peaks:". $peaks . "& Maxium decibel: " . $max . "\n";

$file = "putty.txt" ;
if(file_exists($file))
	$fp = fopen($file , "a") ;
else 
	$fp = fopen($file , "w") ;
fwrite($fp , $record) ;
fclose($fp) ;
//echo "From Thien, e1900307";
?>
