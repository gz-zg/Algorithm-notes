#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

char a[100][100];
int sign[100];

// void solve()
// {
//     int n; cin>>n;
//     sign[1]=1;//#
//     for(int i=2;i<=n;i++)sign[i]=sign[i-1]^1;
 
//     for(int i=1;i<=n;i++)
//     {
//         int t = sign[i];
//         for(int j=1;j<=2*n;j+=2)
//         {
//             if(t==1)a[i][j]=a[i][j+1]='#';
//             else a[i][j]=a[i][j+1]='.';
//             t^=1;
//         }
//     }
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=2*n;j++)cout<<a[i][j];
//         cout<<endl;
//         for(int j=1;j<=2*n;j++)cout<<a[i][j];
//         cout<<endl;
//     }
// }

void solve()
{
    int n; cin>>n;
    for(int i=0;i<=2*n-1;i++)
    {
        for(int j=0;j<=2*n-1;j++)cout<<( ((i/2+j/2)%2==0)?'#':'.' );
        cout<<endl;
    }
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