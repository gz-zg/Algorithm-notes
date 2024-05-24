#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int main()
{
    string s; cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(i==0 && s[i]=='9')continue;
        s[i]=min(s[i]-'0',9-(s[i]-'0'))+'0';       
    }
    cout<<s<<endl;

    return 0;
}