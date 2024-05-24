#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n; cin>>n;
    n/=1000;
    int s=n%(3600*24);
    int h=s/3600;
    int m=s%3600/60;
    s=s%60;
    printf("%02d:%02d:%02d",h,m,s);

    return 0;
}