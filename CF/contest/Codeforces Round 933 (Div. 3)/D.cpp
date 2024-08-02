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
        int n,m,x; scanf("%d%d%d",&n,&m,&x);
 
        vector<int>ans(n); ans[x-1]=1;
        while (m--)
        {
            int dis; char sign;
            scanf("%d %c",&dis,&sign);
 
            vector<int>temp(n);
            if(sign=='0')
            {
                for(int i=0;i<n;i++)
                    if(ans[i]==1)
                        temp[(i+dis)%n]=1;
            }
            else if(sign=='1')
            {
                for(int i=0;i<n;i++)
                    if(ans[i]==1)
                        temp[(i-dis+n)%n]=1;
            }
            else
            {
                for(int i=0;i<n;i++)
                    if(ans[i]==1)
                    {
                        temp[(i+dis)%n]=1;
                        temp[(i-dis+n)%n]=1;
                    }
            }
            ans=temp;
        }
        int num=0;
        for(int i:ans)
            if(i==1)
                num++;
        cout<<num<<endl;
        for(int i=0;i<n;i++)
            if(ans[i]==1)
                cout<<i+1<<" ";
        cout<<endl;
    }
 
    return 0;
}