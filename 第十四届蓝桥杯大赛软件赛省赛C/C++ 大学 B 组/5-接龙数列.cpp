#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

string a[N];
int f[N];
unordered_map<char,int>pre; //存储的是前面所以数字中末尾字符是char的所以f[i]的最大值

int main()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        f[i]=1;
        f[i]=max(f[i],pre[a[i][0]]+1);
        pre[a[i][a[i].size()-1]]=max(pre[a[i][a[i].size()-1]],f[i]);          
        ans=max(ans,f[i]);
    }    

    cout<<n-ans<<endl;

    return 0;
}