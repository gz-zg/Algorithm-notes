//要用二分来写！！！
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int n,k;
string s;
vector<int>Ha;

bool check(int m)
{
    int num=0;
    for(int i:Ha)
    {
        if(i<=m)continue;
        else num+=i/(m+1);  //对于长度为i的串，最少需要i/(m+1)次转换才能将i拆分成多个长度都<=m的子串，
    }                       //且转换后不会对其他串的长度产生影响，证明在底下
    return num<=k;
}

void solve()
{
    cin>>n>>k>>s;

    int cnt1=0,cnt2=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            if(s[i]!='0')cnt1++;
            else cnt2++;
        }
        else
        {
            if(s[i]!='1')cnt1++;
            else cnt2++;
        }
    }
    int cnt=min(cnt1,cnt2);
    if(k>=cnt)
    {
        cout<<1<<endl;
        return;
    }
///////////////////////////////
    int len=1;
    Ha.clear();
    for(int i=1;i<n;i++)
    {
        if(s[i]==s[i-1])len++;
        else Ha.push_back(len),len=1;
    }
    Ha.push_back(len);
///////////////////////////////
    int l=2,r=n;  //选定二分范围[l,r]->(左闭右闭)  //这里的l必须是2，hack样例在下面
    while(l<r)
    {
        int m=(l+r)/2;
        if(check(m))r=m;
        else l=m+1;
    }
    cout<<l<<endl;
///////////////////////////////
}

int main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}


//证明->长度为i的串，要将其拆分成多个长度都<=m的子串，并且要求转换的次数要最少。最好的方式是从第一个数字开始每隔k的数字才转换一次
//这样操作的话<转换的次数一定最少>

//但是这样操作后会不会影响其他串的长度呢？
//这个可以被证明是不会影响其他串的长度的->因为二分过程中的m最小为2，因此需要被拆分的串的长度最小为3，
//因此，对于要拆分的串中第一个被转换的位置最小为3，因此即便最后一个被转换的位置是原串的末尾的话，也可以通过将所有转换的位置向左移动一格，从而不会对其他串的长度产生影响