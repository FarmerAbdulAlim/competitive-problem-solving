

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
    $input = explode(" ", fgets(STDIN));
    $n = $input[0];
    $k = $input[1];
    $a = array_map("intval", explode(" ", fgets(STDIN)));
    sort($a);
    $cnt = 0;
    $maxCount = 0;
    for ($i = 1; $i < $n; $i++) {
        if ($a[$i] - $a[$i - 1] <= $k) {
            $cnt++;
            $maxCount = max($maxCount, $cnt);
        } else $cnt = 0;
    }

    echo $n - ($maxCount + 1) . PHP_EOL;
}
