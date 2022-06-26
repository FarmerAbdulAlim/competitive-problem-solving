#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,n,m,d,t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        map<char,int>mp;
        n=s.size();
        bool flag=true;
        if(s[0]=='R'||s[0]=='G'||s[0]=='B') flag=false;
        else mp[s[0]]++;
        for(i=1;i<n;i++)
        {
            if(s[i]=='R')
            {
                if(mp['r']==0) flag=false;
                else mp['r']--;
            }
            else if(s[i]=='G')
            {
                if(mp['g']==0) flag=false;
                else mp['g']--;
            }
            else if(s[i]=='B')
            {
                if(mp['b']==0) flag=false;
                else mp['b']--;
            }
            else mp[s[i]]++;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

