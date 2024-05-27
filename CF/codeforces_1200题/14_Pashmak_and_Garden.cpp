#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int main()
{
    int x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;

    if(x1==x2)
    {
        int t=abs(y1-y2);
        cout<<x1-t<<" "<<y1<<" "<<x2-t<<" "<<y2<<endl;
    }
    else if(y1==y2)
    {
        int t=abs(x1-x2);
        cout<<x1<<" "<<y1-t<<" "<<x2<<" "<<y2-t<<endl;
    }
    else
    {
        int t1=abs(x1-x2), t2=abs(y1-y2);
        if(t1!=t2)cout<<-1<<endl;
        else cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<endl;
    }

    return 0;
}