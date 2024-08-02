#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        s='0'+s;

        bool sign=true;
        int red=0; int blue=0;
        for(int i=1;i<=n;i++)
        {
            if(s[i]=='R')red++;
            if(s[i]=='B')blue++;
            if(s[i]=='W')
            {
                if( (red && blue) || (!red && !blue) )
                {
                    red=0; blue=0;
                }
                else {sign=false;break;}
            }
        }
        if( !((red && blue) || (!red && !blue)) )sign=false;

        if(sign)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}


//王继源的code
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include <vector>
#include <set>
#include <map>
#include <cstdio>
#include <cstring>
#include <queue>
#include <cstdlib>
#include <algorithm>
#include <list>
#include <string>
#include <cmath>
#include <bitset>
#include <stack>
#include <math.h>
#include <functional>
#include <unordered_map>
#include <unordered_set>


#define ull		        unsigned long long 
#define ll              long long
#define pii             pair<ll ,ll>
#define cy              cout<<"YES"<<endl
#define cn              cout<<"NO"<<endl
#define forn(i,begin,end,add)	for(ll (i)=(begin);(i)<=(end);(i)+=(add))	//begin是i的起始，end是i的终止，add是每次加的大小
#define rforn(i,begin,end,sub)  for(ll (i)=(end);(i)>=(begin);(i)-=(sub))	//r是倒序遍历
#define vv              vector
#define inf32           INT32_MAX/2
#define inf64           INT64_MAX/2
#define LD              double
#define PI              acos(-1)
#define debug(a,b)		cout<<a<<b
#define eps				1e-12


const int N = 4e4 + 100;
const int mod = 998244353;
ll T;

void solve() {

	int n; cin >> n;
	string s; cin >> s;
	s = '0' + s;
	int b = 0, r = 0;

	forn(i, 1, n, 1) {
		
		if (s[i] == 'B')
			b++;
		if (s[i] == 'R')
			r++;
		if (s[i] == 'W') {
			if ((r && b) || (!r && !b))
			{
				b = 0, r = 0;
				continue;
			}
			else{
				cn;
				return;
			}
			b = 0, r = 0;
		}
	}

	if ((r && b) || (!r && !b))
		cy;
	else
		cn;

}
int main() {

	std::ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	T = 1;
	cin >> T;
	while (T--)
		solve();

}

