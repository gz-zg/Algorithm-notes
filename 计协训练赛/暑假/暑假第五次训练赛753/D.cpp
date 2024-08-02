//既然红色元素只能增加它的值，蓝色元素只能减少它的值，
//那么可以考虑对于蓝色元素，从小到大填满排列的前半段，而对于红色元素则从大到小填满排列的后半段。
//如果出现一个蓝色元素比它应该填的位置上的数还要小，或是一个红色元素比它应该填的位置上的数还要大的不合法情况，那就直接判无解。
#include <bits/stdc++.h>
using namespace std;

int a[200010];

void solve()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);
    string s; cin>>s; s='@'+s;

    vector<int>B,R;
    for(int i=1;i<=n;i++)
        if(s[i]=='B')B.push_back(a[i]);
        else R.push_back(a[i]);
    
    sort(B.begin(),B.end());
    sort(R.begin(),R.end());

    bool sign=true;
    int idx=0;
    for(int i=1;i<=B.size();i++)
        if(B[idx]>=i)idx++;
        else sign=false;

    idx=R.size()-1;
    for(int i=n;i>=n-R.size()+1;i--)
        if(R[idx]<=i)idx--;
        else sign=false;

    if(sign)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

signed main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}