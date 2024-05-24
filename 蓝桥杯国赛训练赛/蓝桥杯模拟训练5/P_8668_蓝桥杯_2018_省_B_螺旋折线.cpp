#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    int x,y; cin>>x>>y;
    int ans=0;

    if(abs(x)>=abs(y))
    {
        if( (x<0&&y<0)||(x>0&&y>0) )  //-
        {
            ans-=abs(y);
            if(x>0)ans+=(x*2+1)*(x*2)-x;
            else ans+=((abs(x)*2-1)+1)*(abs(x)*2-1)-abs(x);
        }
        else  //+
        {
            ans+=abs(y);    
            if(x>0)ans+=(x*2+1)*(x*2)-x;
            else ans+=((abs(x)*2-1)+1)*(abs(x)*2-1)-abs(x);
        }
    }
    else
    {
        if( (x<0&&y<0)||(x>0&&y>0) )  //+
        {
            ans+=abs(x);
            if(y>0)ans+=((y*2-1)+1)*(y*2-1)+y;
            else ans+=(abs(y)*2+1)*(abs(y)*2)+abs(y);
        }
        else  //-
        {
            ans-=abs(x);    
            if(y>0)ans+=((y*2-1)+1)*(y*2-1)+y;
            else ans+=(abs(y)*2+1)*(abs(y)*2)+abs(y);
        }
    }
    
    cout<<ans<<endl;

    return 0;
}