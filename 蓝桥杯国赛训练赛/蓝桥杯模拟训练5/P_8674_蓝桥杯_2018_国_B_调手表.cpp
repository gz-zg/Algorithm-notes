#include<bits/stdc++.h>
#define int long long
using namespace std;

int n,k;
bool st[100010];
int step[100010];

void bfs(int x)  //0~n-1
{
    queue<int>q;
    q.push(x);
    st[x]=true;
    step[x]=0;
    
    while(q.size())
    {
        int t = q.front();
        q.pop();
        if(st[(t+1)%n]==false)
        {
            q.push((t+1)%n);
            st[(t+1)%n]=true;
            step[(t+1)%n]=step[t]+1;
        }
        if(st[(t+k)%n]==false)
        {
            q.push((t+k)%n);
            st[(t+k)%n]=true;
            step[(t+k)%n]=step[t]+1;
        }
    }
}

signed main()
{
    cin>>n>>k;
    
    bfs(0);

    int ans=0;
    for(int i=0;i<n;i++)ans=max(ans,step[i]);
    cout<<ans<<endl;

    return 0;
}