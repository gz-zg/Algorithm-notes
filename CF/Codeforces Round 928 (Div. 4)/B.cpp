#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

char a[20][20];
int len[20];

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int MAX=-1;
        int n;scanf("%d",&n);
        for(int i=1;i<=n;i++)scanf("%s",a[i]+1);
        for(int i=1;i<=n;i++)
        {
            int sum=0;
            for(int j=1;j<=n;j++)if(a[i][j]=='1')sum++;
            len[i]=sum;
            if(sum>MAX)MAX=sum;
        }
        bool sign=true;
        for(int i=1;i<=n;i++)
            if(len[i]!=0 && len[i]!=MAX)sign=false;
            
        if(sign)cout<<"SQUARE"<<endl;
        else cout<<"TRIANGLE"<<endl;
    }

    return 0;
}
