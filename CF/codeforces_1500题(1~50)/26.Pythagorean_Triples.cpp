#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

signed main()
{
    vector<int>c;
    for(int a=3;a<=100000;a++)
        if((a*a-1)%2==0)
            c.push_back((a*a-1)/2+1);

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        cout<<upper_bound(c.begin(),c.end(),n)-c.begin()<<endl;;   
    }

    return 0;
}