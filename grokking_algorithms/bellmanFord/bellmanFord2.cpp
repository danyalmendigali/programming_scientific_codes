#include <iostream>
#include <vector>
#include <climits>
#include <windows.h>

using namespace std;

// Алгоритм Беллмана-Форда для матрицы(Крачатчайший путь от начальной вершины до всех которые есть)


bool bellman_ford(int V, const vector<vector<int>>& adjMatrix, int source, vector<int>& distances, vector<int>& predecessors) {
    distances.assign(V, INT_MAX);
    predecessors.assign(V, -1);
    distances[source] = 0;

    for (int i = 0; i < V - 1; ++i) {
        for (int u = 0; u < V; ++u) {
            for (int v = 0; v < V; ++v) {
                if (adjMatrix[u][v] != 0 && distances[u] != INT_MAX && distances[u] + adjMatrix[u][v] < distances[v]) {
                    distances[v] = distances[u] + adjMatrix[u][v];
                    predecessors[v] = u;
                }
            }
        }
    }

    for (int u = 0; u < V; ++u) {
        for (int v = 0; v < V; ++v) {
            if (adjMatrix[u][v] != 0 && distances[u] != INT_MAX && distances[u] + adjMatrix[u][v] < distances[v]) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int V;
    cout << "Введите количество вершин: ";
    cin >> V;

    vector<vector<int>> adjMatrix(V, vector<int>(V, 0));

    cout << "Введите матрицу смежности:\n";
    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j) {
            cin >> adjMatrix[i][j];
        }
    }

    int source;
    cout << "Введите начальную вершину: ";
    cin >> source;

    vector<int> distances, predecessors;
    if (bellman_ford(V, adjMatrix, source, distances, predecessors)) {
        cout << "Кратчайшие расстояния от вершины " << source << ":\n";
        for (int i = 0; i < V; ++i) {
            cout << "До вершины " << i << " = ";
            if (distances[i] == INT_MAX) {
                cout << "∞\n";
            } else {
                cout << distances[i] << "\n";
            }
        }
    } else {
        cout << "Граф содержит цикл отрицательного веса.\n";
    }

    return 0;
}
