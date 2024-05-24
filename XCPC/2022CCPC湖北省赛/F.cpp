//思维题,还不太理解
#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
	cin >> n;
	if(n == 1){
		cout << 1 << endl;
	    cout << 1 << endl;
	}
    else if(n == 2)
    {
		cout << 2 <<endl;
        cout << "2 2" << endl;
    }
	else
	{
		cout << 2 * (n - 2) << endl;
		for(int i = 2; i <= n - 1; i++)cout << i << " ";
        for(int i = n - 1; i >= 2; i--)cout << i << " ";
        cout<<endl;
	}
}

int main() 
{
    solve();

    return 0;
}