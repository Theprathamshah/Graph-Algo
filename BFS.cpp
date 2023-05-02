#include <bits/stdc++.h>
using namespace std;

void breadthFirstSearch(vector<int> adj[], int n, int i, vector<bool> &vis)
{
    queue<int> q;
    q.push(i);
    while (!q.empty())
    {
        auto rem = q.front();
        q.pop();
        if (vis[rem])
            continue;
        cout << rem << " ";
        vis[rem] = true;
        for (auto ele : adj[rem])
        {
            if (vis[ele] == false)
            {
                q.push(ele);
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> adj[n];
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<bool> vis(n, false);
    breadthFirstSearch(adj, n, 3, vis);
    return 0;
}
/*

6
6
0 1
0 3
3 2
1 2
3 4
4 5


*/