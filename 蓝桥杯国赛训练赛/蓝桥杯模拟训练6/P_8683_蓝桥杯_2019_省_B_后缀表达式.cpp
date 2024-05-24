#include<bits/stdc++.h>
#define int long long 
using namespace std;

int a[200010];
// 《前/后缀表达式》都是不带括号的，但是在它们的计算过程中相当于是有使用《括号》去改变了运算符的优先级的
//  因此《前/后缀表达式》对应的《中缀表达式》是可能带有括号的
// 《前/后缀表达式》与其对应的《中缀表达式》的计算结果相等

//  而只要有一个《负号》的话，《前/后缀表达式》与其对应的《中缀表达式》的格式就可以写成下面这样：
//  ax ± ... - (ay ± ...)  这样的话，对于正数或负数，它们都可以无论配+还是-都可以变成abs(a[i]),即正数，
//  除了 ax只能+（那么ax取最大值） 和 ay只能-（那么ay取最小值）

signed main()
{
    int jia,jian; cin>>jia>>jian;
    
    for(int i=1;i<=jia+jian+1;i++)scanf("%lld",&a[i]);
    sort(a+1,a+1+jia+jian+1);

    int ans=0;
    if(jian==0)
    {
        for(int i=1;i<=jia+jian+1;i++)ans+=a[i];
        cout<<ans<<endl;
    }
    else
    {   
        for(int i=2;i<=jia+jian;i++)ans+=abs(a[i]);
        ans+=a[jia+jian+1];  //加上最大的数
        ans-=a[1];           //减去最小的数
        cout<<ans<<endl;
    }

    return 0;
}