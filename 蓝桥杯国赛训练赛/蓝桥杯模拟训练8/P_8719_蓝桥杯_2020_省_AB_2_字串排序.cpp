#include<bits/stdc++.h>

using namespace std;

int main()
{
    int v; cin>>v;

    string ans="z";
    int t=1; char c='y';
    while(v>=1)
    {
        ans+=c;
        v-=t;
        c--;
        t++;
    }
    int cha=ans[ans.size()-1]-'a';
    for(char& i:ans)i-=cha;
    cout<<ans<<endl;

    return 0;
}