#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

void solve()
{
    int n,k; cin>>n>>k;
    if(k%2==1)
    {
        if(n%2==0)
        {
            //ou
            if(k*2>n)cout<<"NO"<<endl;
            else
            {
                cout<<"YES"<<endl;
                for(int i=1;i<k;i++)cout<<2<<" ";
                cout<<n-(k-1)*2<<endl;
            }
        }
        else
        {
            //ji
            if(k>n)cout<<"NO"<<endl;
            else
            {
                cout<<"YES"<<endl;
                for(int i=1;i<k;i++)cout<<1<<" ";
                cout<<n-(k-1)<<endl;
            }
        }
    }
    else
    {
        if(n%2==0)
        {
            if(k>n && k*2>n)cout<<"NO"<<endl;
            else if(k*2<=n)
            {
                cout<<"YES"<<endl;
                for(int i=1;i<k;i++)cout<<2<<" ";
                cout<<n-(k-1)*2<<endl;
            }
            else if(k<=n)
            {
                cout<<"YES"<<endl;
                for(int i=1;i<k;i++)cout<<1<<" ";
                cout<<n-(k-1)<<endl;
            }
        }
        else cout<<"NO"<<endl;
    }
    
}

int main()
{
    int t; cin>>t;
    while(t--)solve();
    return 0;
}

//官方写法->更加的简洁,利索hh
/*
#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int n1 = n - (k - 1);
		if (n1 > 0 && n1 % 2 == 1) {
			cout << "YES" << endl;
			for (int i = 0; i < k - 1; ++i) cout << "1 ";
			cout << n1 << endl;
			continue;
		}
		int n2 = n - 2 * (k - 1);
		if (n2 > 0 && n2 % 2 == 0) {
			cout << "YES" << endl;
			for (int i = 0; i < k - 1; ++i) cout << "2 ";
			cout << n2 << endl;
			continue;
		}
		cout << "NO" << endl;
	}
}
*/