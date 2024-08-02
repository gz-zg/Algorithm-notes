//Accepted
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    int n,k; cin>>n>>k;

    int kk=k, t=-1;  //t<=19
    for(;kk;kk>>=1)t++;

    vector<int>ans;
    for(int i=0;i<t;i++)ans.push_back(1<<i);
    if(k-(1<<t)!=0)ans.push_back(k-(1<<t));

    ans.push_back(k+1);ans.push_back(2*k+1);
    while(ans.size()<25){k*=2;ans.push_back(k);}

    cout<<ans.size()<<endl;
    for(int i:ans)cout<<i<<" ";
    cout<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}