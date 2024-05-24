#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int main()
{
    string a,b; cin>>a>>b;

    int ans=0;
    for(int i=0;i<a.size()-1;i++)
        if(a[i]!=b[i])
        {
            ans++;
            if(a[i+1]=='*')a[i+1]='o';
            else a[i+1]='*';
        }
    cout<<ans<<endl;

    return 0;
}