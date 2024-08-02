#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

string a,b;

void solve()
{
    cin>>a>>b;
    
    vector<string>res1,res2;
    for(int i=0;i<b.size();i++)
        for(int j=1;j<=b.size()-i;j++)
            res1.push_back(b.substr(i,j));
    for(int i=0;i<a.size();i++)
        for(int j=1;j<=a.size()-i;j++)
            res2.push_back(a.substr(i,j));
    
    int ans=1e18;
    for(int i=0;i<res1.size();i++)
        for(int j=0;j<res2.size();j++)
        {
            int num=0;
            string x=res1[i], y=res2[j];
            for(int k=0;k<x.size() && k<y.size();k++)
            {
                if(x[k]==y[k])num++;
                else break;
            }
            int t=a.size()+b.size()-2*num;
            ans=min(ans,t);
        }
    cout<<ans<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}