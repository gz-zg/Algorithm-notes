#include <bits/stdc++.h>
#define int long long
using namespace std;

int n;

void solve()
{
    cin>>n;
    if(n==1)cout<<"1\n1"<<endl;
    else if(n==2)cout<<"2\n1 2"<<endl;
    else if(n==3)cout<<"2\n1 2 2"<<endl;
    else if(n==4)cout<<"3\n1 2 2 3"<<endl;
    else if(n==5)cout<<"3\n1 2 2 3 3"<<endl;
    else if(n==6)cout<<"4\n1 2 2 3 3 4"<<endl;
    else
    {
        vector<int>ans(n+10);
        for(int i=1;i<=n;i++)
        {
            ans[i]=i%4;
            if(ans[i]==0)ans[i]=4;
        }
        cout<<4<<endl;
        for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}