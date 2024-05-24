#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 200010;

int inf=2147483647;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        LL ans=0;
        
        int n; cin>>n;
        multiset<int> a; int temp;
        for(int i=1;i<=n;i++)scanf("%d",&temp),a.insert(temp);
        
        for(auto it = a.begin(); it != a.end(); it++)
        {
            auto t=it;
            if(it!=a.begin())
            {
                t--;
                a.erase(t);
            }
            int tar=(*it)^inf;
            auto iitt =a.find(tar);
            if(iitt!=a.end())a.erase(iitt),ans++;
            else ans++;
        }

        cout<<ans<<endl;
    }

    return 0;
}
