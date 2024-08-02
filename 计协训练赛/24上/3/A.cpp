#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int main()
{
    int t; cin>>t;
    while (t---)
    {
        int n; cin>>n;
        if(n<=1399)cout<<"Division 4"<<endl;
        else if(n<=1599)cout<<"Division 3"<<endl;
        else if(n<=1899)cout<<"Division 2"<<endl;
        else cout<<"Division 1"<<endl;
    }
    
    return 0;
}