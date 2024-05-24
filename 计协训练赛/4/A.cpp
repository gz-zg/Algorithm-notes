#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int a[N];

int main()
{
    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        if(s[0]=='y' || s[0]=='Y')
            if(s[1]=='e' || s[1]=='E')
                if(s[2]=='s' || s[2]=='S')
                {
                    cout<<"YES"<<endl;
                    continue;
                }
       cout<<"NO"<<endl; 
    }

    return 0;
}