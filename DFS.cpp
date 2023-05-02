#include <bits/stdc++.h>
using namespace std;

void deapthFirstSearch(vector<int> adj[], int src, vector<bool> &vis)
{
    if (vis[src])
        return;
    vis[src] = true;
    cout << src << " ";
    for (auto ele : adj[src])
    {
        if (!vis[ele])
        {
            deapthFirstSearch(adj, ele, vis);
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
    deapthFirstSearch(adj, 0, vis);

    return 0;
}
