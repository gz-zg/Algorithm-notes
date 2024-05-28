#include<bits/stdc++.h>
#define int long long 
using namespace std;

signed main()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++)cout<<max((i-1)*2,(n-i)*2)<<endl;

    return 0;
}