#include <bits/stdc++.h>
#define int long long
using namespace std;

char st[200010];

void solve()
{
    int n; cin>>n;
    for(int i=0;i<=n+10;i++)st[i]='\0';
    string s; cin>>s;
    map<char,int>mp;
    for(char i:s)mp[i]++;
    int a=min(mp['E'],mp['W']);
    mp['E']-=a; mp['W']-=a;
    int b=min(mp['S'],mp['N']);
    mp['S']-=b; mp['N']-=b;
    if(mp['S']%2!=0 || mp['N']%2!=0 || mp['E']%2!=0 || mp['W']%2!=0)cout<<"NO"<<endl;
    else if(n==2 && a+b==1)cout<<"NO"<<endl;
    else
    {   
        if(mp['S']!=0 || mp['N']!=0 || mp['E']!=0 || mp['W']!=0)
        {
            int E=a,W=a;
            int S=b,N=b;
            for(int i=0;i<n;i++)
            {
                if(s[i]=='E')
                {
                    if(E>=1){st[i]='R';E--;}
                }
                if(s[i]=='W')
                {
                    if(W>=1){st[i]='R';W--;}
                }
                if(s[i]=='S')
                {
                    if(S>=1){st[i]='R';S--;}
                }
                if(s[i]=='N')
                {
                    if(N>=1){st[i]='R';N--;}
                }
            }
            for(auto i:mp)
                if(i.second!=0)
                {
                    char t=i.first;int num=i.second;
                    for(int i=0;i<n;i++)
                    {
                        if(s[i]==t && st[i]=='\0' && num>=1)
                        {
                            if(num%2==1)st[i]='R',num--;
                            else st[i]='H',num--;
                        }
                    }
                } 
        }
        else
        {
            if(a!=0)
            {
                int x=0,y=0;
                for(int i=0;i<n;i++)
                {
                    if(s[i]=='E' && x==0)st[i]='R',x++;
                    else if(s[i]=='W' && y==0)st[i]='R',y++;
                    else st[i]='H';
                }
            }
            else
            {
                int x=0,y=0;
                for(int i=0;i<n;i++)
                {
                    if(s[i]=='S' && x==0)st[i]='R',x++;
                    else if(s[i]=='N' && y==0)st[i]='R',y++;
                    else st[i]='H';
                }
            }
        }
        cout<<st<<endl;
    }
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}