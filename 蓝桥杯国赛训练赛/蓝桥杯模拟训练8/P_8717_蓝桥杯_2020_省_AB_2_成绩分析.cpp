#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin>>n;
    int maxv=-1,minv=250,sum=0;
    for(int i=1;i<=n;i++)
    {
        int t; cin>>t;
        sum+=t;
        if(t>maxv)maxv=t;
        if(t<minv)minv=t;
    }

    printf("%d\n%d\n%.2lf",maxv,minv,double(sum)/n);

    return 0;
}