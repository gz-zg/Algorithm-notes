#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin>>n;
    int ans=0;
    for(int i=1;i<n;i++)
    {
        int v=i;
        v=v*v;
        if(n%2==1)
        {
            if(v%n<=n/2)ans++;
        }
        else
        {
            if(v%n<n/2)ans++;
        }
    }
    cout<<ans<<endl;

    return 0;
}