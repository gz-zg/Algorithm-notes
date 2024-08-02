#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    string n; cin>>n; int len=n.size();
    int a=stoll(n);
    int s; cin>>s;

    int sum=0;
    for(char i:n)sum+=i-'0';
    if(sum<=s)
    {
        cout<<0<<endl;
        return;
    }

    vector<int>res;  //存的是所有可行进位方式所需要的次数
    int t=1;
    for(int i=1;i<=len;i++)t*=10;
    res.push_back(t-a);  //t-a为对最高位的前面一位去进位所需要的次数

    int now=1;  
    for(int i=0;i<len;i++)
    {
        now+=n[i]-'0';
        if(n[i]=='9')continue;  //如果要进位的位置上的数字是9的话，相当于对其前面一位进行进位，会发生重复，所以跳过
        
        if(now<=s)
        {
            int pre=0;
            for(int j=0;j<=i-1;j++)pre=pre*10+(n[j]-'0');
            pre=pre*10+(n[i]-'0'+1);
            //不能使用pow，这会导致计算结果存在double中而丢失精度
            for(int j=i+1;j<len;j++)pre*=10;
            res.push_back(pre-a);
        }
    }
    sort(res.begin(),res.end());
    cout<<res[0]<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}