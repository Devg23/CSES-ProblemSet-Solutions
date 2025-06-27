#include <bits/stdc++.h>
using namespace std;

bool check(int start, vector<vector<int>>& adj, vector<int>& color) {
    queue<int> q;
    q.push(start);
    color[start] = 1;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (int neighbor : adj[node]) {
            if (color[neighbor] == -1) {
                color[neighbor] = 3 - color[node]; // flip between 1 and 2
                q.push(neighbor);
            } else if (color[neighbor] == color[node]) {
                return false; // not bipartite
            }
        }
    }

    return true;
}

int main() {
    ios::sync_with_stdio(false); // Fast IO
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n + 1); // 1-based indexing
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> color(n + 1, -1);

    for (int i = 1; i <= n; i++) {
        if (color[i] == -1) {
            if (!check(i, adj, color)) {
                cout << "IMPOSSIBLE\n";
                return 0;
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << color[i] << " ";
    }
    cout << "\n";

    return 0;
}
