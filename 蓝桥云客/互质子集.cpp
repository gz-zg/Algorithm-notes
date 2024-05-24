#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int gcd(int a,int b)
{
    if(b==0)return a;
    else return gcd(b,a%b);
}

int ans=0;
vector<int>li;

void dfs(int num,int pre)
{
    if(num>ans)ans=num;

    for(int i=pre+1;i<=105;i++)
    {
        bool sign=true;
        for(auto j:li)
            if(gcd(i+j,105)!=1)
            {
                sign=false;
                break;
            }
        if(sign)
        {
            li.push_back(i);
            dfs(num+1,i);
            li.pop_back();
        }
    }
}

int main()
{
    dfs(0,0);
    cout<<ans<<endl;

    return 0;
}