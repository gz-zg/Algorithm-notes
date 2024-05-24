#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 200010;

int a[N];

bool PD[1010][1010];

int gcd(int a,int b)
{
    if(b==0)return a;
    else return gcd(b,a%b);
}

int main()
{
    for(int i=1;i<=1000;i++)
        for(int j=1;j<=1000;j++)
            if(gcd(i,j)==1)
                PD[i][j]=true;

    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        map<int,int>mp;
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
            mp[a[i]]=i;  //mp用来记录每种数最后出现的位置
        } 

        int ans=-1;
        
        for(int i=1;i<=1000;i++)
            for(int j=i;j<=1000;j++)
                if(PD[i][j])
                    if(mp.count(i) && mp.count(j))
                        ans=max(ans,mp[i]+mp[j]);
    
        cout<<ans<<endl;
    }
    return 0;
}