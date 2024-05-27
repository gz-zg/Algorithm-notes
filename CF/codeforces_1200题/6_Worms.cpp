//做法一：预处理出每个蠕虫所在的堆的编号->实现空间换时间->O(m)
//做法二：二分->O(mlogn)
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int a[N];
int b[N];
int h[1000010];

int main()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);

    int u=0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=a[i];j++)
        {
            u++;
            h[u]=i;
        }

    int m; cin>>m;
    for(int i=1;i<=m;i++)
    {
        scanf("%d",&b[i]);
        cout<<h[b[i]]<<endl;
    }

    return 0;
}