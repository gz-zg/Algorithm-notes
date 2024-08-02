#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        int a=0,b=0;
        for(char i:s)
        {
            if(i=='A')a++;
            else b++;
        }
        if(a>b)cout<<"A"<<endl;
        else cout<<"B"<<endl;
    }

    return 0;
}