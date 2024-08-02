#include <bits/stdc++.h>
using namespace std;

bool solve1(string s)
{
    int pos=s.find("AB");
    if(pos!=-1)
    {
        pos=s.find("BA",pos+2);
        if(pos!=-1)return true;
    }    
    return false;
}
bool solve2(string s)
{
    int pos=s.find("BA");
    if(pos!=-1)
    {
        pos=s.find("AB",pos+2);
        if(pos!=-1)return true;
    }    
    return false;
}

signed main()
{
    string s; cin>>s;
    
    if(solve1(s) || solve2(s))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
