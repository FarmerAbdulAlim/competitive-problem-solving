
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

int main()
{
    int n, m, d, test, x, y;
    cin>>test;
    while(test--)
    {
        cin>>x>>y>>n;
        vector<int>v;
        v.push_back(y);
        int i =1;
        int cnt = 2;
        d = y;
        while(cnt<=n-1 && d>x) {
            v.push_back(d-i);
            d = d - i;
            i++;
            cnt++;
        }
        v.push_back(x);
        bool isOkay = true;
        if(v.size()!=n) puts("-1");
        else {
            sort(v.begin(), v.end());
            for(int i= 0; i<n-2; i++) {
                if(v[i+1]-v[i]<=v[i+2]-v[i+1]) isOkay = false;
            }

            if(isOkay) {
                for(int i = 0; i<n; i++) {
                cout<<v[i]<<" ";
            }
            puts("");
            }
            else puts("-1");

        }
    }
    return 0;
}


