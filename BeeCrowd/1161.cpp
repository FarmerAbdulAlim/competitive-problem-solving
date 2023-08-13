#include<bits/stdc++.h>
using namespace std;


int main()
{
    int i, j, k, n, m, d, test, t=0, a[59];
    cin>>test;
    while(test--) {
        cin>>n;
        int cnt =0;
        for(i=0;i<n;i++) {
            cin>>d;
            if(d%2==1) cnt++;
        }
        if(cnt%2) puts("No");
        else puts("Yes");
    }
    return 0;
}

