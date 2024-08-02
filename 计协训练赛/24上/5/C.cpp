#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

char a[10][10];

int main()
{
    int t; cin>>t;
    while(t--)
    {
        for(int i=1;i<=8;i++)scanf("%s",a[i]+1);
        
        int l[10],ll=0;
        for(int i=1;i<=8;i++)
        {
            int num=0;
            for(int j=1;j<=8;j++)
            {
                if(a[j][i]=='#')num++;
            }
            l[++ll]=num;
        }

        for(int i=2;i<=7;i++)
        {
            if(l[i]==1)
                if(l[i-1]==2 && l[i+1]==2)
                {
                    for(int j=1;j<=8;j++)
                        if(a[j][i]=='#')
                        {
                            cout<<j<<" "<<i<<endl;
                            break;
                        }
                }
        }
    }

    return 0;
}