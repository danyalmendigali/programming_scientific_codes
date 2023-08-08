#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

const int INF = 1e9;

struct Edge {
    int source, target, weight;
};

void bellmanFord(vector<Edge> &edges, int numVertices, int startVertex, int endVertex) {
    vector<int> dist(numVertices, INF);
    vector<int> pred(numVertices, -1);
    dist[startVertex] = 0;

    for (int i = 1; i < numVertices; ++i) {
        for (const Edge &edge : edges) {
            int u = edge.source;
            int v = edge.target;
            int w = edge.weight;

            if (dist[u] != INF && dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pred[v] = u;
            }
        }
    }

    // Восстановление пути
    vector<int> shortestPath;
    for (int v = endVertex; v != -1; v = pred[v]) {
        shortestPath.push_back(v);
    }
    reverse(shortestPath.begin(), shortestPath.end());

    // Вывод результатов
    cout << "Кратчайший путь от " << startVertex << " до " << endVertex << ":\n";
    for (int vertex : shortestPath) {
        cout << vertex << " ";
    }
    cout << "\n";

    cout << "Расстояние: " << dist[endVertex] << "\n";
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numVertices, numEdges;
    cout << "Введите количество вершин и рёбер: ";
    cin >> numVertices >> numEdges;

    vector<Edge> edges(numEdges);
    cout << "Введите рёбра в формате (u, v, w), где u и v - вершины, w - вес:\n";
    for (int i = 0; i < numEdges; ++i) {
        cin >> edges[i].source >> edges[i].target >> edges[i].weight;
    }

    int startPoint, endPoint;
    cout << "Введите начальную и конечную вершины: ";
    cin >> startPoint >> endPoint;

    bellmanFord(edges, numVertices, startPoint, endPoint);

    return 0;
}
