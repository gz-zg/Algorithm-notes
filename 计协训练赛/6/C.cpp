#include<iostream>
#include<vector>
#include<map>

using namespace std;

int a[200010];

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,k; scanf("%d%d", &n, &k);

        map<int,vector<int>>mp;
        for(int i=1;i<=n;i++)
        {
            scanf("%d", &a[i]);
            mp[a[i]].push_back(i);
        }
       
       while(k--)
       {
            int a,b; scanf("%d%d", &a, &b);
            if(mp.count(a) && mp.count(b))
            {
                if(mp[a].front()<=mp[b].back())cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
            else cout<<"NO"<<endl;
       }
    }
    return 0;
}