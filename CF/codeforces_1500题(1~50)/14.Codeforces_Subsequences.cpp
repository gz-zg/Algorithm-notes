//排列组合，codeforces这十个字符每个字符的数量的乘积即为子串codeforces的总数
//那么该如何分配每个字符的数量才能在满足数量的前提下使得原字符串的长度最短呢？？？
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int a[11];

void solve()
{
    string t = "@codeforces";
    for(int i=1;i<=10;i++)
        for(int j=1;j<=a[i];j++)
            cout<<t[i];
}

signed main()
{
    int k; cin>>k;
    for(int i=1;i<=10;i++)a[i]=1;
    if(k==1)
    {
        cout<<"codeforces"<<endl;
        return 0;
    }
    while(1)
    {
        for(int i=1;i<=10;i++)
        {
            a[i]++;
            int sum=1;
            for(int i=1;i<=10;i++)
            {
                sum*=a[i];
                if(sum>=k){solve(); return 0;}
            }
        }
    }

    return 0;
}