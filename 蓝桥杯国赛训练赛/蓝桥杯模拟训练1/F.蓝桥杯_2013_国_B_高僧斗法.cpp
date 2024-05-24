#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int pos=1;
int a[110];
int b[110];

bool check()
{
    int ans=0;
    for(int i=1;i<=pos-1;i+=2)ans^=b[i];  //这里为什么时+=2呢？因为将和尚两两一组（每个和尚只能属于一组）的时候，当每一组里面都不能走时，此时也是必败态
    if(ans!=0)return true; //必胜
    else return false;     //必败
}

int main()
{
    while(cin>>a[pos])pos++;
    pos--;

    for(int i=1;i<=pos-1;i++)b[i]=a[i+1]-a[i]-1;
    if(check()==false){cout<<-1<<endl; return 0;}  //一开始为必败态
    else  //一开始为必胜态，因此只需要枚举第一步所有可以走的走法，看哪种走法可以使得对手处于必败态
    {
        for(int i=1;i<=pos-1;i++)
            for(int j=1;a[i]+j<a[i+1];j++)
            {
                if(i%2==1)b[i]-=j;
                else b[i-1]+=j;
                if(check()==false){cout<<a[i]<<" "<<a[i]+j<<endl; return 0;}
                if(i%2==1)b[i]+=j;
                else b[i-1]-=j;
            }
    }    

    return 0;
}   