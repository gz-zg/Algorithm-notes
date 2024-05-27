//贪心->从前往后遍历s的每一个字符，在遇到第一个'1'之前，所有的'2'和'0'都是对半分到a和b里面,
//在遇到第一个'1'之时，将'1'分到a里面，将'0'分到b里面，从此以后a,b中的max绝对是a，
//所以在遇到第一个'1'之后只需要使得a尽可能的小就可以了->即始终把'0'分给a
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    int n; cin>>n;
    string s; cin>>s;
    string a,b;
    int sign=1;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='2')
        {
            if(sign==1)a+='1',b+='1';
            else a+='0',b+='2';
        }
        else if(s[i]=='0')a+='0',b+='0';
        else
        {
            if(sign==1)a+='1',b+='0',sign=0;
            else a+='0',b+='1';
        }
    }  
    cout<<a<<endl<<b<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}