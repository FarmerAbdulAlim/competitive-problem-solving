/**************************************************************************
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

#include<bits/stdc++.h>
using namespace std;

#define LL long long

map<LL, LL>mp;

void f() {
    mp[1]= 2;
    LL p = 100000;
    for(LL i = 3; true; i++) {
        LL q = i*(i-1)/2;
        mp[q] = i;
        if(q>=100000) break;
    }
}

int main()
{
    LL n, m, d, test;
    cin>>test;
    f();
    while(test--) {
        cin>>n;
        for(int i=1;i<1000;i++) {
            if(mp[i])
                cout<<mp[i]<<endl;
        }
    }
    return 0;
}


