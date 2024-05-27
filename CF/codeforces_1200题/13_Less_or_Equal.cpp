#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 200010;

int a[N];

int main()
{
    int n,k; cin>>n>>k;
    
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);
    sort(a+1,a+1+n);
    
    if(k==0)
    {
        if(a[1]-1>=1)cout<<a[1]-1<<endl;
        else cout<<-1<<endl;
    }
    else
    {
        if(a[k]==a[k+1])cout<<-1<<endl;
        else cout<<a[k]<<endl;
    }

    return 0;
}