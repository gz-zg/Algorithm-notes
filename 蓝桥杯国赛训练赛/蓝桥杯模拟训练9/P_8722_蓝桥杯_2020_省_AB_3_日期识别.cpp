#include<bits/stdc++.h>

using namespace std;

map<string,int>mp={
    {"Jan",1},{"Feb",2},{"Mar",3},
    {"Apr",4},{"May",5},{"Jun",6},
    {"Jul",7},{"Aug",8},{"Sep",9},
    {"Oct",10},{"Nov",11},{"Dec",12}
    };

int main()
{
    string s; cin>>s;
    string m = s.substr(0,3), d = s.substr(3,2);
    cout<<mp[m]<<" "<<(d[0]-'0')*10+(d[1]-'0')<<endl;

    return 0;
}