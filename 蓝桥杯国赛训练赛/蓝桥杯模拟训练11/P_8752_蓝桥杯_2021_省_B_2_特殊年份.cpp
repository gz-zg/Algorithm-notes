#include<bits/stdc++.h>

using namespace std;

int main()
{
    int ans=0;
    for(int i=1;i<=5;i++)
    {
        string s; cin>>s;
        if(s[0]==s[2] && s[1]+1==s[3])ans++;
    }
    cout<<ans<<endl;

    return 0;
}