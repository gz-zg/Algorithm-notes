#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int main()
{
    int t; cin>>t;
    while (t--)
    {
        map<int,int>mp;
        int n; cin>>n;
        for(int i=1;i<=n;i++)
        {
            int a; scanf("%d",&a);
            mp[a]++;
        }
        int num=0;
        for(auto i:mp)
        {
            if(i.second>=3)
            {
                cout<<i.first;
                num++;
                break;
            }
        }
        if(num==0)cout<<-1;
        cout<<endl;
    }

    return 0;
}