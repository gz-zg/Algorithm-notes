//是<有向图游戏>吗？形式上是，但是可以使用贪心做出来->这道题也是每个人的奇偶性不同，且每个人的奇偶性固定
#include<iostream>

using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        long long n; cin>>n;
        n=n*n-1;
        string s; cin>>s;
        if(n%2==0)
        {
            if(s=="wolxy")cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else
        {
            if(s=="wolxy")cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        
    }
    return 0;
}