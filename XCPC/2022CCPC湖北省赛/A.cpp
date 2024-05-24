//<Floyd> + <Kruskal>,还没有AC
#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

int d[310][310],n,m,k;
int t;
int Hs[310];
bool st[310];

int main()
{
    memset(d,0x3f,sizeof d);
    cin>>n>>m>>k;
    cin>>t;

    if (t==0){
        cout << -1 << endl;
        return 0;
    }

    for(int i=1;i<=n;i++)d[i][i]=0;
    for(int i=1;i<=m;i++)
    {
        int x,y,z; cin>>x>>y>>z;
        d[x][y]=min(d[x][y],z);
        d[y][x]=min(d[y][x],z);
    }
    
    for(int k=1;k<=n;k++)
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                d[i][j]=min(d[i][j],d[i][k]+d[k][j]);

      
     for(int i=1;i<=k;i++)
     {
        cin>>Hs[i];
        st[Hs[i]]=true;
     }
     
     long long ans=-1;
     long long ans1=-1;
     for(int i=1;i<=n;i++)
     {
         if(st[i]==false)
         {
            long long minv=2e9;
            for(int j=1;j<=k;j++)
            {
                if(d[Hs[j]][i]!=0x3f3f3f3f)minv=min(minv,(long long)d[Hs[j]][i]);
            }
            ans=max(ans,minv);
         }
     }
    
     for(int i=1;i<=k;i++)
    {
        int minv=2e9;
        for(int j=1;j<=k;j++)
            if(j!=i)
                if(d[Hs[i]][Hs[j]]!=0x3f3f3f3f)
                minv=min(minv,d[Hs[i]][Hs[j]]);
        ans1=max(ans1,(long long)minv);
    }

     //ans=max(ans*2,ans1);
     cout<<(ans+t-1)/t<<endl;
    
    return  0;
}


/*
4 5 2
3
1 2 2
2 3 4
3 4 3
1 4 2
2 4 3
2 3
*/