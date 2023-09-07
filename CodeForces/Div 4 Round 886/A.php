

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
while ($test--) {
    $a = array_map("intval", explode(" ", fgets(STDIN)));
    sort($a);
    if ($a[1] + $a[2] >= 10) echo "Yes\n";
    else echo "No\n";
}
