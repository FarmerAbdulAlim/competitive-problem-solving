
/**************************************************************************
   *                 Solved By : Abdul Alim                               *
   *                 GitHub    : github.com/FarmerAbdulAlim               *
   *                 Email     : farmerabdulalim@gmail.com                *
   *                 YouTube   : youtube.com/@TravelerAbdulAlim           *
   *                 YouTube   : youtube.com/@AbdulAlim-Bangladesh        *
   ************************************************************************/

/*
    Algorithm Used:
    Complexity: O(N)
    Solution Approach:
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, d, test, a[200009], b[200009];
    cin>>test;
    while(test--) {
        cin>>n;
        bool track = true;
        memset(b, 0, sizeof(b));
        for(int i=0;i<n;i++) {
            cin>>a[i];
            if(a[i]>n) {
                continue;
                track = false;
            }
            b[a[i]]++;
        }
        for(int i=n-1; i>=1; i--) {
            b[i] = b[i] + b[i+1];
        }
        for(int i=0;i<n;i++) {
            if(a[i]!=b[i+1]) track = false;
        }
        if(track) puts("Yes");
        else puts("No");
    }
    return 0;
}

