#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void bfs(vector<vector<int>>& adjList, int start) {
    int n = adjList.size();
    vector<bool> visited(n, false);

    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int v = q.front();
        q.pop();

        cout << v << " "; // Output the visited vertex

        for (int neighbor : adjList[v]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m; // Read the number of vertices and edges

    vector<vector<int>> adjList(n); // Create an adjacency list for the graph

    // Read the edges of the graph
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v; // Read an edge (u, v)

        // Add the edge to the adjacency list (assuming undirected graph)
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    int startVertex;
    cin >> startVertex; // Read the starting vertex for BFS

    bfs(adjList, startVertex);

    return 0;
}
