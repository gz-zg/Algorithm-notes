#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 

bool solve()
{
    int Min=2e9;
    //unordered_map<int,int>mp;
    map<int,int>mp;  //哈哈哈哈，小丑，居然因为使用了unordered_map而超时了
    int n,c,d; cin>>n>>c>>d;
    for(int i=1;i<=n*n;i++)
    {
        int temp; cin>>temp;
        mp[temp]++;
        Min=min(Min,temp);
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            if(mp[Min+(j-1)*d]==0)return false;
            else mp[Min+(j-1)*d]--;
        Min+=c;
    }
    return true;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        if(solve())cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}