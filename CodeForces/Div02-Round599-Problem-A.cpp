
/*
    My Contact Info:-
    Name: Abdul Alim
    Email: travelerabdulalim@gmail.com
    LinkedIn: https://www.linkedin.com/in/travelerabdulalim/
    GitHub: https://github.com/travelerabdulalim
    ------------------------------------------------------------------------
    Algorithm Used:
    Idea:
*/
#include<bits/stdc++.h>
using namespace std;
#define LL long long

int main()
{
    int i,j,k,n,m,d,test,a[1009],l;
    cin>>test;
    while(test--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int ans=1;
        for(i=n-1;i>=0;i--)
        {
            d=min(a[i],n-i);
            ans=max(ans,d);
        }
        cout<<ans<<endl;

    }
    return 0;
}


