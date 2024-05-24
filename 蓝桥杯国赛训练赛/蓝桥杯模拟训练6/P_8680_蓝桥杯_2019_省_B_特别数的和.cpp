#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin>>n;

    int ans=0;
    for(int i=1;i<=n;i++)
    {
        int j=i;
        while(j)
        {
            int t=j%10;
            j/=10;
            if(t==2 || t==0 || t==1 || t==9){ans+=i; break;}
        }
    }
    cout<<ans<<endl;

    return 0;
}