/*
1) Problem Link: https://leetcode.com/problems/roman-to-integer/
2) Algorithm: Implementation
3) Difficulty: Easy
*/

var romanToInt = function(s) {
    const map = {
        "I": 1,
        "V": 5,
        "X": 10,
        "L": 50,
        "C": 100,
        "D": 500,
        "M": 1000
    }
    let ans = map[s[0]];
    for(let i=1; i<s.length; i++) {
        if(map[s[i]]>map[s[i-1]]) ans = ans - 2*map[s[i-1]] + map[s[i]];
        else ans = ans + map[s[i]];
    }
    return ans;
};

console.log(romanToInt("MCMXCIV"));
console.log(romanToInt("LVIII"));