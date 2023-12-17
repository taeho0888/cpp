#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

void dfs(int node, const vector<vector<int>>& graph, vector<bool>& visited) {
    cout << node << " ";
    visited[node] = true;

    for (int next: graph[node]) {
        if (!visited[next]) {
            dfs(next, graph, visited);
        }
    }
}

void bfs(int node, const vector<vector<int>>& graph, vector<bool>& visited) {
    queue<int> q;
    q.push(node);
    visited[node] = true;

    while (!q.empty()) {
        int current = q.front();
        q.pop();
        cout << current << " ";

        for (int next : graph[current]) {
            if (!visited[next]) {
                q.push(next);
                visited[next] = true;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, m, v;
    cin >> n >> m >> v;

    vector< vector<int>> graph(n + 1);
    vector<bool> visited(n + 1, false);

    for (int i = 0; i < m; i++) {
        int s, e; cin >> s >> e;
        graph[s].push_back(e);
        graph[e].push_back(s);
    }

    for (int i = 1; i <= n; i++) {
        sort(graph[i].begin(), graph[i].end());
    }

    dfs(v, graph, visited);
    cout << "\n";

    fill(visited.begin(), visited.end(), false);
    bfs(v, graph, visited);
    cout << "\n";

    return 0;
}