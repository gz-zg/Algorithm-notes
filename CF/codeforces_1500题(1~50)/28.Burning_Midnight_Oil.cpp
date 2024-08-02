#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n,k;

bool check(int mid)
{
    int sum=0;
    int t=mid/1;
    while(t)
    {
        sum+=t;
        t/=k;
    }
    if(sum>=n)return true;
    else return false;
}

signed main()
{
    cin>>n>>k;
    
    int l=1,r=n;
    while(l<r)
    {
        int mid=(l+r)/2;
        if(check(mid))r=mid;
        else l=mid+1;
    }
    cout<<l<<endl;
 
    return 0;
}