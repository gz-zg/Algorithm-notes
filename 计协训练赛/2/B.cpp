#include<iostream>
#include<map>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        bool sign = true;
        map<int,int>mp;
        int n; cin>>n;
        for(int i=1;i<=n;i++)
        {
            int a; scanf("%d", &a);
            mp[a]++;
            if(mp[a]>1)
            {
                sign=false;
                break;  
                //致命错误警告！！！！！
                //不能在还没有读完一组测试用例时就结束该测试用例，会影响下一组测试用例的输入数据
            }
        }
      
        if(sign)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}