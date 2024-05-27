#include<bits/stdc++.h>
#define int long long 
using namespace std;

signed main()
{
    int n,t; cin>>n>>t;
    string s; cin>>s;
    bitset<10010>bt1(s);  //初始化时在bitset中是右对齐,最低位(最右边)下标为０
    bitset<10010>bt2=bt1;
    int cnt=1;
    bt2=(bt2>>1)^bt2;
    while(bt1!=bt2)
    {
        bt2=(bt2>>1)^bt2;
        cnt++;
    }
    t%=cnt;
    while(t--)bt1=(bt1>>1)^bt1;
    for(int i=n-1;i>=0;i--)cout<<bt1[i];

    return 0;
}