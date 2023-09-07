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


$test = intval(fgets(STDIN));
$prime = [13, 23, 31, 43, 53, 61, 71, 83, 97];
while ($test--) {
    $s = fgets(STDIN);
    $idx = (int)$s[0];
    echo $prime[$idx - 1] . PHP_EOL;
}
