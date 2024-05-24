#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n,m;
string a,b;

bool check(int mid)
{
    int j=1;
    for(int i=1;i<=m;i++)  //b
    {
        if(b[i]==a[j])j++;
        if(j>=mid+1)return true;
    }
    return false;
}

void solve()
{
    cin>>n>>m;
    cin>>a>>b;
    a='k'+a;
    b='k'+b;

    int l=0,r=n;
    while(l<r)
    {
        int mid=(l+r+1)/2;
        if(check(mid))l=mid;
        else r=mid-1;
    }
    cout<<l<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}