#include<bits/stdc++.h>
#define int long long 
using namespace std;

int a[1010],b[1010];

signed main()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i]>>b[i];

    int ans=2;
    for(int i=2;i<=n;i++)
    {
        set<pair<double,double>>mt;
        double a1=a[i],b1=b[i];
        bool sign=true;
        for(int j=1;j<i;j++)
        {
            double a2=a[j],b2=b[j];
            double a=a1-a2,b=b2-b1;
            if(a==0 && b==0){sign=false;}
            if(a!=0)
            {
                double x=b/a,y=a1*x+b1;
                mt.insert({x,y});
            }
        }
        if(sign)ans+=1+mt.size();
    }
    cout<<ans<<endl;

    return 0;
}