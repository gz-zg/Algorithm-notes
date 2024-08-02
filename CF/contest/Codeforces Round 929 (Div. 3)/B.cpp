#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int a[N];

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        LL sum=0;
        unordered_map<int,int>mp;
        for(int i=1;i<=n;i++)scanf("%d",&a[i]),mp[a[i]]++,sum+=a[i];
        
        int ans=0;
        int yu=sum%3;
        if(yu==0){printf("0\n");continue;}
        
        bool sign=false;
        for(int i=yu;i<=10000;i+=3)
            if(mp.count(i))
            {
                sign=true;
                break;
            }

        if(sign)ans=1;
        else ans=(3-yu);
        
        printf("%d\n",ans);
    }

    return 0;
}