//这道题使用《双指针算法》为什么是正确的呢？
//可以这么想，所有的区间可以根据左端点进行划分，而这里的双指针算法求的是以每个左端点开始的最长长度
//当r指针右移到不能再移动时，然后右移一步l指针，这个时候有两种情况->①此时r指针又能右移了，
//那就继续右移它并且去更新答案（此时，在继续右移之前， l 与 r 左边的点构成的区间就可以直接不要了，因为它们已经不会影响到最终的答案了）
//②此时r指针依旧不能右移，那么说明此时的以l为左端点的所有可行区间的最大长度都无法使得ans更大了（即没有用），那么l可以继续右移了
#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    int n,d,k;cin>>n>>d>>k;
    map<int,vector<int>>mp;
    for(int i=1;i<=n;i++)
    {
        int ts,id; scanf("%lld%lld",&ts,&id);
        mp[id].push_back(ts);
    }
    
    for(auto i:mp)
    {
        vector<int>tmp=i.second;
        sort(tmp.begin(),tmp.end());
        int num=0;
        int r=0;
        for(int l=0;l<tmp.size();l++)
        {
            while(r<tmp.size() && tmp[r]-tmp[l]+1<=d)
            {
                num=max(num,r-l+1);
                r++;
            }            
        }
        if(num>=k)cout<<i.first<<endl;
    }
    
    return 0;
}