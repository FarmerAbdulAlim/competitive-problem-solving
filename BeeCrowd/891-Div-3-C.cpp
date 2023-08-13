#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, k, n, m, d, test, t=0;
    cin>>test;
    while(test--) {
        string s;
        cin>>s;
        string p = "0";
        s = p + s;
        n = s.size();
        for(i = 1; i<n; i++) {
             if(s[i]>='5') break;
        }
        for(j=i; j>=1; j--) {
            if(s[j]>='5') s[j-1]++;
            else break;
        }
        if(s[0]=='1')
        {
            printf("1");
            for(i=0; i<n-1; i++)
                printf("0");
        }
        else
        {
            bool track = 1;
            for(i=1; i<n; i++)
            {
                if(s[i]<'5' && track==1) cout<<s[i];
                else
                {
                    cout<<"0";
                    track = 0;
                }
            }
        }
        puts("");
    }
    return 0;
}
