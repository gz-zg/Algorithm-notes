#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

vector<string>a(N);

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        map<string,int>mp;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            mp[a[i]]=1;
        }

        for(int i=1;i<=n;i++)
        {
            string s=a[i];
            bool sign = false;
            for(int j=1;j<=s.size()-1;j++)
            {
                string s1=s.substr(0,j);
                string s2=s.substr(j);
                
                if(mp[s1] && mp[s2]){cout<<1; sign=true; break;}
            }
            if(sign==false)cout<<0;
        }
        cout<<endl;
    }
    return 0;
}
