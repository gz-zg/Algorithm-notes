//s+='a' 比 s=s+'a' 速度快，并且s越长差距越明显！！！！！
#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    string t; cin>>t;
    
    string op;
    map<char,int>mp,idx;
    for(int i=t.size()-1;i>=0;i--)
    {    
        if(mp[t[i]]==0)op=t[i]+op;
        mp[t[i]]++;
    }
    for(int i=0;i<op.size();i++)idx[op[i]]=i+1;

    int len=0;
    for(auto i:mp)
        if(i.second>0)
            if(i.second%idx[i.first]!=0)
            {
                cout<<-1<<endl;
                return;
            }
            else len+=i.second/idx[i.first];
    string ans=t.substr(0,len);
    
    string tmp;
    for(int i=0;i<=op.size();i++)
        for(int j=0;j<ans.size();j++)
            if(idx[ans[j]]>i)
                tmp+=ans[j];
    if(tmp==t)cout<<ans<<" "<<op<<endl;
    else cout<<-1<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}