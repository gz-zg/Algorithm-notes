#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int w,m,n;

int main()
{
    cin>>w>>m>>n;
    m--,n--;

    int x1=m/w,y1=m%w;
    int x2=n/w,y2=n%w;
    if(x1%2==1)y1=w-1-y1;
    if(x2%2==1)y2=w-1-y2;

    cout<<abs(x1-x2)+abs(y1-y2)<<endl;

    return 0;
}