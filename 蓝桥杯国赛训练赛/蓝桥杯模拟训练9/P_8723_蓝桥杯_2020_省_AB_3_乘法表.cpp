#include<bits/stdc++.h>

using namespace std;

int n;

string change(int x)
{
    vector<int>ans;
    while(x)
    {
        ans.push_back(x%n);
        x/=n;
    }
    reverse(ans.begin(),ans.end());
    string res;
    for(int i:ans)
        if(i<=9)res+=char(i+'0');
        else res+=char(i-10+'A');
    return res;
}

int main()
{
    cin>>n;
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=i;j++)cout<<change(i)<<"*"<<change(j)<<"="<<change(i*j)<<" ";
        cout<<endl;
    }

    return 0;
}