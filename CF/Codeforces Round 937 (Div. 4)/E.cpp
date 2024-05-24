//解决的办法就是检查 n 的所有因数，看看哪一个最小的因数可以成立。

//要检查长度 l 是否可行，可以将长度为 l 的前缀与 s 相乘，直到长度相同，然后检查相差多少。
//但是，不同的字母也可能出现在前缀中(例如， hshaha ，此时 l=2 )，
//因此我们也要对长度为 l的后缀进行同样的检查。如果其中一个为真，则输出 l

// n 最长为 10^5 的数最多有 128 个因数，因此需要 128⋅10^5次运算，速度已经足够快了。
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n; string s;

bool check(int x)
{
    if(x==n)return true;

    int num=0;
    for(int i=1;i<=x;i++)
    {
        unordered_map<char,int>mp;
        for(int j=i;j<=n;j+=x)mp[s[j]]++;
        if(mp.size()>=3)return false;
        if(mp.size()==2)
        {
            int M=INF;
            for(auto i:mp)M=min(M,i.second);
            num+=M;
        }
    }
    if(num<=1)return true;
    else return false;
}
void solve()
{
    cin>>n>>s;
    s='0'+s;
    vector<int>yue;
    for(int i=1;i<=n/i;i++)
        if(n%i==0)
        {
            yue.push_back(i);
            if(i!=n/i)yue.push_back(n/i);
        }
   
    sort(yue.begin(),yue.end());

    for(int i=0;i<yue.size();i++)
        if(check(yue[i]))
        {
            cout<<yue[i]<<endl;
            return;
        }
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}