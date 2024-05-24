#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

// void solve()
// {
//     int a,b;
//     scanf("%d:%d",&a,&b);
//     if(a==0)printf("%02d:%02d AM\n",a+12,b);
//     else if(a>=1 && a<=11)printf("%02d:%02d AM\n",a,b);
//     else if(a==12)printf("%02d:%02d PM\n",a,b);
//     else printf("%02d:%02d PM\n",a-12,b);
// }

void solve()
{
    int h,m;
    scanf("%d:%d",&h,&m);
    printf("%02d:%02d %s\n",(h+11)%12+1,m,((h*60+m>=720)?"PM":"AM"));
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}