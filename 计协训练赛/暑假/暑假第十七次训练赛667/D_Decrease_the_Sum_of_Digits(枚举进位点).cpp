//枚举进位点
//注意：数位为9的位置不用考虑将其作为进位点，
//因为以它作为进位点相当于以其前面那个位置作为进位点，
//这会导致重复计算，并且以数位为9的位置作为进位点不好考虑
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n,s;

void solve()
{
    cin>>n>>s;
    int ans=2e18;
    
    string sn=to_string(n);
    int sum=0;
    for(char i:sn)sum+=i-'0';
    if(sum<=s)
    {
        cout<<0<<endl;
        return;
    }

    int len=sn.size();
    for(char &i:sn)i='0';
    sn='1'+sn;
    sum=0;
    for(char i:sn)sum+=i-'0';
    if(sum<=s)ans=min(ans,stoll(sn)-n);
    
    string t=to_string(n);
    for(int i=0;i<len;i++)
    {
        if(t[i]!='9')
        {
            sn=to_string(n);
            for(int j=i+1;j<len;j++)sn[j]='0';
            sn[i]++;
            int sum=0;
            for(char i:sn)sum+=i-'0';
            if(sum<=s)ans=min(ans,stoll(sn)-n);
        }
    }

    cout<<ans<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}