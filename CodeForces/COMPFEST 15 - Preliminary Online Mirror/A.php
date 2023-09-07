

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

$n = intval(fgets(STDIN));
$a = array_map("intval", explode(" ", fgets(STDIN)));
$ans = 1000009;
foreach ($a as $b) {
    if ($b < 0) $b = $b * -1;
    $ans = min($ans, $b);
}

echo $ans . PHP_EOL;
