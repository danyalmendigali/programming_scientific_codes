#include <iostream>
#include <vector>
#include <climits>
#include <windows.h>

using namespace std;

// Алгоритм Беллмана-Форда для списка ребер(Крачатчайший путь от начальной вершины до всех которые есть)

struct Edge {
    int source, dest, weight;
};

bool bellman_ford(int V, const vector<Edge>& edges, int source, vector<int>& distances, vector<int>& predecessors) {
    distances.assign(V, INT_MAX);
    predecessors.assign(V, -1);
    distances[source] = 0;

    for (int i = 0; i < V - 1; ++i) {
        for (const Edge& edge : edges) {
            if (distances[edge.source] != INT_MAX && distances[edge.source] + edge.weight < distances[edge.dest]) {
                distances[edge.dest] = distances[edge.source] + edge.weight;
                predecessors[edge.dest] = edge.source;
            }
        }
    }

    for (const Edge& edge : edges) {
        if (distances[edge.source] != INT_MAX && distances[edge.source] + edge.weight < distances[edge.dest]) {
            return false;
        }
    }

    return true;
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    int V, E;
    cout << "Введите количество вершин: ";
    cin >> V;
    cout << "Введите количество ребер: ";
    cin >> E;

    vector<Edge> edges(E);

    cout << "Введите ребра и их веса (формат: исходная вершина, конечная вершина, вес): " << "\n";
    for (int i = 0; i < E; ++i) {
        cin >> edges[i].source >> edges[i].dest >> edges[i].weight;
    }

    int source;
    cout << "Введите начальную вершину: ";
    cin >> source;

    vector<int> distances, predecessors;
    if (bellman_ford(V, edges, source, distances, predecessors)) {
        cout << "Кратчайшие расстояния от вершины " << source << ":\n";
        for (int i = 0; i < V; ++i) {
            cout << "До вершины " << i << " = " << distances[i] << "\n";
        }
    } else {
        cout << "Граф содержит цикл отрицательного веса.\n";
    }

    return 0;
}
