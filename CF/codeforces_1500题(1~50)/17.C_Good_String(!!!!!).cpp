//本题可以容易证得满足条件的字符串里的元素循环的周期长度为1或2,且当周期长度为2时字符串长度为偶数
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    string s; cin>>s; int n=s.size();

    vector<int>ans;
    for(int i=0;i<=9;i++)
        for(int j=0;j<=9;j++)  //大佬的牛逼写法
        {
            int num=0;
            for(int k=0;k<n;k++)
                if((num%2==0&&s[k]==i+'0') || (num%2==1&&s[k]==j+'0'))
                    num++;
            if(num%2==1 && i!=j)ans.push_back(num-1);
            else ans.push_back(num);
        }

    sort(ans.begin(),ans.end());
    cout<<n-ans[ans.size()-1]<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}

//我自己的垃圾写法
/*
//本题可以容易证得满足条件的字符串里的元素循环的周期长度为1或2,且当周期长度为2时字符串长度为偶数
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    string s; cin>>s; int n=s.size();

    vector<int>ans;
    for(int i=0;i<=9;i++)
        for(int j=0;j<=9;j++)
        {
            int num=0; int sign=0;
            for(int k=0;k<n;k++)
            {
                if(sign==0)
                {
                    while(k<n && s[k]!=i+'0')num++,k++;
                    sign^=1;
                }
                else 
                {
                    while(k<n && s[k]!=j+'0')num++,k++;
                    sign^=1;
                }
            }
            if((n-num)%2==1 && i!=j)ans.push_back(num+1);
            else ans.push_back(num);
        }
    sort(ans.begin(),ans.end());
    cout<<ans[0]<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}
*/