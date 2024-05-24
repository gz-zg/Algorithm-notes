#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int a[]={3,8,5,1,6,3,4,6,7,0,7,8,2,7,6,8,9,5,6,5,6,1,4,0,1,0,0,9,4,8,0,9,1,2,8,5,0,2,5,3,3};
int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

int main()
{
    int ans=0;
    for(int m=1;m<=12;m++)
        for(int d=1;d<=days[m];d++)
        {
            int pos=0;
            int path[4];
            path[pos++]=m/10;
            path[pos++]=m%10;
            path[pos++]=d/10;
            path[pos++]=d%10;
            
            int idx=0;
            for(int i=0;i<=40;i++)
                if(a[i]==path[idx])
                {
                    idx++;
                    if(idx==4)
                    {
                        ans++;
                        break;
                    }
                }
        }

    cout<<ans<<endl;  //ans==235
    
    return 0;
}