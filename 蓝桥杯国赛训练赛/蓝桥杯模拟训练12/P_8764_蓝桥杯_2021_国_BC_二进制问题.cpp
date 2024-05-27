//数位DP
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int C(int a,int b)
{
    int res=1;
    for(int i=1,j=b;i<=a;i++,j--)res=res*j/i;
    return res;
}

signed main()
{
    int n,k; cin>>n>>k;
    
    int ans=0, cnt=0;
    for(int i=63;i>=0;i--)
        if(n>>i&1)
        {
            //如果当前这一位选择0的话
            if(k-cnt<=i)ans+=C(k-cnt,i);

            //如果当前这一位选择1的话
            cnt++;
            if(k-cnt==0)
            {
                ans++;
                break;
            }
        }
    cout<<ans<<endl;

    return 0;
}