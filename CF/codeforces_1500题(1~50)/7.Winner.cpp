#include <bits/stdc++.h>
using namespace std;

map<string,int>mp1,mp2;  //mp1:name-最终分数 //mp2:name-当前分数
string name[1010];
int score[1010];

signed main()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>name[i]>>score[i];
        mp1[name[i]]+=score[i];
    }
    int maxv=-2e9;
    for(auto i:mp1)
        if(i.second>maxv)
            maxv=i.second;
    for(int i=1;i<=n;i++)
    {
        mp2[name[i]]+=score[i];
        if(mp1[name[i]]==maxv && mp2[name[i]]>=maxv)
        {
            cout<<name[i]<<endl;
            break;
        }
    }

    return 0;
}