#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin>>s;
    for(char& i:s)
        if('a'<=i && i<='z')i-=32;
    cout<<s<<endl;

    return 0;
}