#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> PII;

int n, m;
int t[1010];
int g[1010][1010];
int dist[1010];
bool st[1010];

void dijkstra()
{
    memset(dist, 0x3f, sizeof dist);
    priority_queue<PII, vector<PII>, greater<PII>> dui;
    dist[1] = 0;
    dui.push({0, 1});
    while (dui.size())
    {
        auto t = dui.top();
        dui.pop();
        int a = t.first, b = t.second;
        if (st[b] == true) continue;
        else
        {
            st[b] = true;
            for (int i = 1; i <= n; i++)
                if (g[b][i] != -1)
                    if (a + g[b][i] < dist[i])
                    {
                        dist[i] = a + g[b][i];
                        dui.push({dist[i], i});
                    }
        }
    }
    cout << dist[n] - t[n] << endl;
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> t[i];

    memset(g, -1, sizeof g);
    while (m--)
    {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        g[a][b] = c + t[b];
        g[b][a] = c + t[a];
    }

    dijkstra();

    return 0;
}