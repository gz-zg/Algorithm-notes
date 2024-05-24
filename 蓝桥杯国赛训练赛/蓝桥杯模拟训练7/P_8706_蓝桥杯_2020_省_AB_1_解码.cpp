#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin>>s;
    string ans;
    for(int i=0;i<s.size();i++)
        if('0'<=s[i] && s[i]<='9')
        {
            for(int j=1;j<=s[i]-'0'-1;j++)ans+=s[i-1];
        }
        else ans+=s[i];
    
    cout<<ans<<endl;    

    return 0;
}