
/*
    My Contact Info:-
    Name: Md Abdul Alim
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
    int i,j,k,n,m,d,test,l;
    cin>>test;
    while(test--)
    {
        string s,t;
        cin>>n>>s>>t;
        if(s.size()==1&&s==t)
        {
            puts("Yes");
            continue;
        }
        if(s==t)
        {
            puts("Yes");
            continue;
        }
        for(i=0;i<s.size();i++)
        {
            if(s[i]==t[i])
            {
                s.erase(s.begin()+i);
                t.erase(t.begin()+i);
                i--;
            }
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s.size()==1&&s[0]==t[0]) puts("Yes");
        else if(s.size()==2&&s[0]==s[1]&&t[0]==t[1]) puts("Yes");
        else puts("No");

    }
    return 0;
}



