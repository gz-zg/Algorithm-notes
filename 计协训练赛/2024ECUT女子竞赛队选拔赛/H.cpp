#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n,k;
string s[2];
bool st[2][N];
queue<pair<int,pair<int,int>>>q;

bool bfs()
{
    st[0][1]=true;
    q.push({0,{1,0}});  //{人在哪边,{人的高度，水的高度}}
    while(q.size())
    {
        auto t = q.front();
        q.pop();
        int a=t.first,b=t.second.first,c=t.second.second;

        if(b+1>n || b+k>n)return true;

        if(st[a][b+1]==false && b+1>c+1 && s[a][b+1]!='X')
        {
            st[a][b+1]=true;
            q.push({a,{b+1,c+1}});
        }
        if(st[a][b-1]==false && b-1>c+1 && s[a][b-1]!='X')
        {
            st[a][b-1]=true;
            q.push({a,{b-1,c+1}});
        }
        if(st[a^1][b+k]==false && b+k>c+1 && s[a^1][b+k]!='X')
        {
            st[a^1][b+k]=true;
            q.push({a^1,{b+k,c+1}});
        }
    }
    return false;
}

int main()
{
    cin>>n>>k>>s[0]>>s[1];
    s[0]='0'+s[0]; s[1]='0'+s[1];

    if(bfs())cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}