#include <iostream>
#include <vector>
#include <climits>
#include <stack>
#include <windows.h>

using namespace std;

bool bellman_ford(const vector<vector<int>>& graph, int source, vector<int>& distances, vector<int>& predecessors) {
    int V = graph.size();
    distances.assign(V, INT_MAX);
    predecessors.assign(V, -1);
    distances[source] = 0;

    for (int i = 0; i < V - 1; ++i) {
        for (int u = 0; u < V; ++u) {
            for (int v = 0; v < V; ++v) {
                if (graph[u][v] != INT_MAX && distances[u] != INT_MAX && distances[u] + graph[u][v] < distances[v]) {
                    distances[v] = distances[u] + graph[u][v];
                    predecessors[v] = u;
                }
            }
        }
    }

    for (int u = 0; u < V; ++u) {
        for (int v = 0; v < V; ++v) {
            if (graph[u][v] != INT_MAX && distances[u] != INT_MAX && distances[u] + graph[u][v] < distances[v]) {
                return false;
            }
        }
    }

    return true;
}

void print_path(const vector<int>& predecessors, int endPoint) {
    stack<int> path;
    int current = endPoint;
    while (current != -1) {
        path.push(current);
        current = predecessors[current];
    }
    while (!path.empty()) {
        cout << path.top() << " ";
        path.pop();
    }
    cout << endl;
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int V;
    cout << "Введите количество вершин: ";
    cin >> V;

    vector<vector<int>> graph(V, vector<int>(V, INT_MAX));

    cout << "Введите матрицу смежности: " << "\n";
    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j) {
            cin >> graph[i][j];
        }
    }

    int startPoint, endPoint;
    cout << "Введите начальную вершину: ";
    cin >> startPoint;
    cout << "Введите конечную вершину: ";
    cin >> endPoint;

    vector<int> distances;
    vector<int> predecessors;
    if (bellman_ford(graph, startPoint, distances, predecessors)) {
        cout << "Кратчайшее расстояние " << distances[endPoint] << "\n";
        cout << "Путь: ";
        print_path(predecessors, endPoint);
    } else {
        cout << "Граф содержит цикл отрицательного веса.\n";
    }

    return 0;
}


