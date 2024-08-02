#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int a[60];

int main()
{
    int t; cin>>t;
    while(t--)
    {   
        int n; cin>>n;
        for(int i=1;i<=n;i++)scanf("%d",&a[i]);
        string s;cin>>s;
        map<int,char>mp;
        bool sign=true;
        for(int i=1;i<=n;i++)
        {
            if(mp[a[i]]=='\0')mp[a[i]]=s[i-1];
            else
            {
                if(mp[a[i]]!=s[i-1])
                {
                    sign=false;
                    break;
                }
            }
        }
        if(sign)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}