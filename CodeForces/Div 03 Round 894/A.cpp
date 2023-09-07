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

string s[25];
int n, m;

bool columnCheck(int idx, char c) {
    for(int i=0;i<n;i++) {
        if(s[i][idx]==c) return true;
    }
    return false;
}

int main()
{
    int d, test;
    cin>>test;
    while(test--) {
        cin>>n>>m;
        for(int i=0;i<n;i++)
            cin>>s[i];
        bool check = false;
        for(int i=0;i<m; i++) {
            for(int j=i+1; j<m; j++) {
                for(int k=j+1; k<m; k++) {
                    for(int l=k+1; l<m; l++) {
                        if(columnCheck(i, 'v') && columnCheck(j, 'i')&& columnCheck(k, 'k')&& columnCheck(l, 'a'))
                            check = true;
                    }
                }
            }
        }
        if(check) puts("Yes");
        else puts("No");
    }
    return 0;
}

