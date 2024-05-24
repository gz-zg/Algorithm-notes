#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;

        map<int,int>mp;
        for(int i=1;i<=n;i++)
        {
            int a; scanf("%d",&a);
            mp[a%10]++;
        }

        bool sign=false;
        for(int i=0;i<=9;i++)
            for(int j=0;j<=9;j++)
                for(int k=0;k<=9;k++)
                    if(i+j+k==3 || i+j+k==13 || i+j+k==23)
                    {
                        map<int,int>backup=mp;
                        backup[i]--;
                        if(backup[i]<0)continue;
                        backup[j]--;
                        if(backup[j]<0)continue;
                        backup[k]--;
                        if(backup[k]<0)continue;
                        sign=true;
                    }
        if(sign)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}