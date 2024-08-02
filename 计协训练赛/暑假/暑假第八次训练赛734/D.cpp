//这题中的字符串a不是只能通过找规律找出，可以通过“欧拉回路”找到，如下所示：
/*
#include <bits/stdc++.h>

using namespace std;

int n, k;
int cur[26];
vector<int> path;

void dfs(int v) {
  while (cur[v] < k) {
    int u = cur[v]++;
    dfs(u);
    path.push_back(u);
  }
}

int main() {
  scanf("%d%d", &n, &k);
  dfs(0);
  printf("a");
  for (int i = 0; i < n - 1; ++i)
    printf("%c", path[i % path.size()] + 'a');
}
*/
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k; cin>>n>>k;
    string a;
    for(int i=0;i<k;i++)
    {
        a+='a'+i;
        for(int j=i+1;j<k;j++)
        {
            a+='a'+i;
            a+='a'+j;
        }
    }
    for(int i=0;i<n;i++)cout<<a[i%a.size()];
    cout<<endl;
}

signed main()
{
    solve();
    return 0;
}