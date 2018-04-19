<?php
function getCurrentPage(){
	$current_page=pathinfo($_SERVER['PHP_SELF'],PATHINFO_FILENAME);
	return $current_page;
}
