#include<bits/stdc++.h>
#define int long long
using namespace std;

int n;
int C(int a,int b){
    int res=1;
    for(int i=a,j=1;j<=b;i--,j++){
        res=res*i/j;
        if(res>n)
            return res;
    }
	return res;
}
signed main()
{
    cin>>n;
    
    if(n==1)
    {
        cout<<1<<endl;
        return 0;
    }

    for(int i=16;i>=1;i--)
    {
        int l=i*2,r=2e9;
        while(l<r)
        {
            int m=(l+r)/2;
            int val=C(m,i);
            if(val==n)
            {
                cout<<m*(1+m)/2+i+1<<endl;
                return 0;
            }
            else if(val<n)l=m+1;
            else r=m;
        }
    }
    
    return 0;
}