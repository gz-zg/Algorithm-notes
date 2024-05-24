//要求的是<正余数>
#include<iostream>
 
using namespace std;
const long long mod = 998244353;
 
long long f[100010];
 
int main()
{
     
        int a,b,c,d,q; cin>>a>>b>>c>>d>>q;
        f[0]=d;
        f[1]=2*d;
        for(int i=2;i<=100000;i++)
        {
            f[i]=c*f[i-2]+(a+b)*f[i-1]-(a+b)*d+2*d;
            f[i]=((f[i]%mod)+mod)%mod; //求出f[i]模mod后的<正余数>,因为题目要求的就是<正余数>。//如果不这样做的话，可能会求出f[i]的负余数，这个f[i]的值绝对是错误的。
        }//因为求f[i]的过程中涉及到了减法，因此取模后的f[i]不一定是<正余数>，可能会是<负余数>。

        while(q--)
        {
            int t; cin>>t;
            cout<<f[t]<<endl;
        }
         
     
    return 0;
}