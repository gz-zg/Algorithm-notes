#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

vector<int>a;

void solve()
{
    for(int i=0;i<a.size();i++)
        if(a[i]%8==0)
        {
            cout<<"YES"<<endl;
            cout<<a[i]<<endl;
            return;
        }
    for(int i=0;i<a.size();i++)
        for(int j=i+1;j<a.size();j++)
            if((a[i]*10+a[j])%8==0)
            {
                cout<<"YES"<<endl;
                cout<<a[i]*10+a[j]<<endl;
                return;
            }
    for(int i=0;i<a.size();i++)
        for(int j=i+1;j<a.size();j++)
            for(int k=j+1;k<a.size();k++)
                if((a[i]*100+a[j]*10+a[k])%8==0)
                {
                    cout<<"YES"<<endl;
                    cout<<a[i]<<a[j]<<a[k]<<endl;
                    return;
                }
        cout<<"NO"<<endl;
}

signed main()
{
    string s; cin>>s;
    for(char i:s)a.push_back(i-'0');    
    solve();

    return 0;
}