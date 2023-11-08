<?php

require_once("cat.php");

$mycat = new Cat();
$mycat2 = new Cat();
$mycat->name = "Mincis";
$mycat2->name = "Brincis";

Cat::moew();
?>