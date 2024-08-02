#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

unordered_map<int,int>mp;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int a,b,l; scanf("%d%d%d",&a,&b,&l);
        set<int>st;
        while (1)
        {
            int x=l;
            while (1)
            {
                st.insert(x);
                if(x%b!=0)break;
                x/=b;
            }
            if(l%a!=0)break;
            l/=a;
        }
        cout<<st.size()<<endl;
    }
    return 0;
}