

<?php

/************************************************************************
 *                 Solved By : Abdul Alim                               *
 *                 GitHub    : github.com/FarmerAbdulAlim               *
 *                 Email     : farmerabdulalim@gmail.com                *
 *                 YouTube   : youtube.com/@TravelerAbdulAlim           *
 *                 YouTube   : youtube.com/@AbdulAlim-Bangladesh        *
 ************************************************************************/

/*
    Algorithm Used:
    Complexity:
    Solution Approach:
*/

$testCases = intval(fgets(STDIN));
while ($testCases--) {
    $ans = "";
    for ($i = 1; $i <= 8; $i++) {
        $s = trim(fgets(STDIN));
        $ss = str_split($s);
        foreach ($ss as $c) {
            if ($c != ".") $ans = $ans . $c;
        }
    }
    echo $ans . PHP_EOL;
}
