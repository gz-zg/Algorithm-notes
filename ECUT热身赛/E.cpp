#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>>n;
    
    string st;
    int l=0,r=n-2;  //这里二分的是数组中某一个转折点的左值的下标
    while(l<r)
    {
        int m=(l+r)/2;
        cout<<"READ"<<" "<<m<<endl; cin>>st;
        if(st=="true")
        {
            cout<<"READ"<<" "<<m+1<<endl; cin>>st;
            if(st=="true")l=m+1;
            else
            {
                cout<<"OUTPUT"<<" "<<m<<endl;
                return;
            }
        }
        else r=m-1;
    }
    cout<<"OUTPUT"<<" "<<l<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}