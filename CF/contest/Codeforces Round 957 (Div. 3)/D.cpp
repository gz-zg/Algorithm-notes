#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    int n,m,k; cin>>n>>m>>k;
    string s; cin>>s; s='@'+s;
    
    vector<int>shui,yu;
    for(int i=1;i<=n;i++)
        if(s[i]=='W' || s[i]=='C')
        {
            int j=i;
            if(s[j]=='C')yu.push_back(j-i+1);//河段的第一个位置就是鳄鱼的这种情况也要考虑上
            while(j+1<=n && (s[j+1]=='W' || s[j+1]=='C'))
            {
                j++;
                if(s[j]=='C')yu.push_back(j-i+1);//m要大于yu里面的每个数
            }
            shui.push_back(j-i+1);
            i=j;
        }
    bool sign=true;
    for(int i:yu)
        if(m<=i)sign=false;
    
    int mi=0;
    for(int i:shui)
        if(i<=m-1)continue;
        else mi+=i-m+1;
    if(mi>k)sign=false;
    if(sign)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}