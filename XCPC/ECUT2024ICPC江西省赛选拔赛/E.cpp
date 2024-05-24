//哈哈哈，败在了 long double（输入输出用 Lf ） 上
#include<iostream>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        long double a,b,c,d; cin>>a>>b>>c>>d;
        long double sum=a+b+c+d;
        printf("%.2Lf\n",(a/sum*100.0+b/sum*0.65*100.0));
    }
    
    return 0;
}