#include<bits/stdc++.h>
#define int long long
using namespace std;

int yue[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

bool check(int y, int m, int d)
{
    if(m<1 || m>12)return false;
    if(d<1)return false;
    if(m!=2)
    {
        if(d>yue[m])return false;
    }
    else
    {
        int leap=(y%400==0) || (y%4==0 && y%100!=0);
        if(d>28+leap)return false;
    }
    return true;
}

signed main()
{
    int st; cin>>st;

    int sign=false;
    for(int i=st+1;;i++)
    {
        int y=i/10000,m=i%10000/100,d=i%100;
        if(check(y,m,d))
        {
            if(i/10000000==i%10 && i/1000000%10==i%100/10 && i/100000%10==i%1000/100 && i/10000%10==i%10000/1000)
            {
                if(sign==false)cout<<i<<endl,sign=true;
                if(i/10000000==i/100000%10 && i/1000000%10==i/10000%10 && i/10000000!=i/1000000%10)
                {
                    cout<<i<<endl;
                    break;
                }
            }
        }
    }

    return 0;
}