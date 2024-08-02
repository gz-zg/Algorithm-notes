#include <bits/stdc++.h>
#define int long long
using namespace std;

int n;
int a1,a2,a3;
int b1,b2,b3;

signed main()
{
    cin>>n;
    cin>>a1>>a2>>a3;
    cin>>b1>>b2>>b3;
    int xi=max(a1-(n-b2),max(a2-(n-b3),a3-(n-b1)));
    int da=min(a1,b2)+min(a2,b3)+min(a3,b1);
    cout<<max(xi,0LL)<<" "<<da<<endl;

    return 0;
}