#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
	int n,k; cin>>n>>k;
	string s; cin>>s;
	
	map<char,int>mp;
	for(char i:s)mp[i]++;

	int ji=0;
	for(auto i:mp)ji+=i.second%2;
	
	if( ji-k>1 )cout<<"NO"<<endl;
	else cout<<"YES"<<endl;
}

int main()
{
	int t; cin>>t;
	while(t--)
	{
		solve();
	}

	return 0;
}