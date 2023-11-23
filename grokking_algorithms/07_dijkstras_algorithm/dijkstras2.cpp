#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define VectorVector vector<vector<int>>

const int INF = 1e9;

void dijkstra(vector<vector<int>>& graph, int startVertex, int endVertex, vector<int>& dist, vector<int>& path) {
    int numVertices = graph.size();
    vector<bool> visited(numVertices, false);
    dist.assign(numVertices, INF);
    path.assign(numVertices, -1);
    dist[startVertex] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, startVertex});
    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        if (u == endVertex) {
            break;
        }
        if (visited[u]) {
            continue;
        }
        visited[u] = true;
        for (int v = 0; v < numVertices; ++v) {
            if (graph[u][v] != 0 && !visited[v]) {
                int newDist = dist[u] + graph[u][v];
                if (newDist < dist[v]) {
                    dist[v] = newDist;
                    path[v] = u;
                    pq.push({dist[v], v});
                }
            }
        }
    }
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numVertices, numEdges;
    cout << "Введите количество вершин и ребер: ";
    cin >> numVertices >> numEdges;

    vector<vector<int>> graph(numVertices, vector<int>(numVertices, 0));

    cout << "Введите ребра и их весы в формате (u, v, weight):" << endl;
    for (int i = 0; i < numEdges; ++i) {
        int u, v, weight;
        cin >> u >> v >> weight;
        graph[u][v] = weight;
    }


    vector<int> dist, path;
    dijkstra(graph, 0, numVertices, dist, path);
    cout << "\n";

    cout << "Кратчайшее расстояние: " << dist[numVertices] << endl;

    cout << "Кратчайший путь: ";
    vector<int> shortestPath;
    for (int v = numVertices; v != -1; v = path[v]) {
        shortestPath.push_back(v);
    }
    reverse(shortestPath.begin(), shortestPath.end());
    for (int v : shortestPath) {
        cout << v << " ";
    }
    cout << endl;

    return 0;
}
