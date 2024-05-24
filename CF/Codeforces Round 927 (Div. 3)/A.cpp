#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;
 
int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        string a; cin>>a;
        int ji=0,ans=0;
        for (int i = 1; i < n; i++)
        {
            if(a[i]=='*')ji++;
            if(ji==2)break;
            if(a[i]=='@')
            {
                ans++;
                ji=0;
            }
            if(a[i]=='.')ji=0;
        }
        cout<<ans<<endl;
    }
    
    return 0;
}
