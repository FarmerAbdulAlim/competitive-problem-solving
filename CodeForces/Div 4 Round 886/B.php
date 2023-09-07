

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
    $n = intval(trim(fgets(STDIN)));
    $maxQuality = 0;
    $position = 1;
    for ($i = 1; $i <= $n; $i++) {
        $a = array_map("intval", explode(" ", fgets(STDIN)));
        if ($a[0] <= 10 && $a[1] > $maxQuality) {
            $maxQuality = $a[1];
            $position = $i;
        }
    }
    echo $position . "\n";
}
