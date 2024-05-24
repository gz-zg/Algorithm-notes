#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int a[55];

int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        for(int i=1;i<=n;i++)scanf("%d",&a[i]);
        
        bool sign1=true;
        for(int i=3;i<=n;i+=2)
        {
            if(a[i]%2!=a[1]%2)sign1=false;
        }
        bool sign2=true;
        for(int i=4;i<=n;i+=2)
        {
            if(a[i]%2!=a[2]%2)sign2=false;
        }
        if(sign1 && sign2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}