#include <iostream>
#include <vector>
#include <climits>
#include <list>
#include <windows.h>

using namespace std;

// Алгоритм Беллмана-Форда для списка ребер(Крачатчайший путь от начальной вершины до конечной)

struct Edge {
    int source, dest, weight;
};

pair<vector<int>, int> bellman_ford(int V, const vector<Edge>& edges, int start, int end) {
    vector<int> distances(V, INT_MAX);
    vector<int> predecessors(V, -1);
    distances[start] = 0;

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
            cerr << "Граф содержит цикл отрицательного веса.\n";
            return {{}, -1}; // Возвращаем пустой список и -1 как индикатор ошибки
        }
    }

    // Восстановление пути от стартовой до конечной вершины
    list<int> path;
    for (int at = end; at != -1; at = predecessors[at]) {
        path.push_front(at);
    }

    return {{path.begin(), path.end()}, distances[end]};
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    int V, E;
    cout << "Введите количество вершин: ";
    cin >> V;

    cout << "Введите количество рёбер: ";
    cin >> E;

    vector<Edge> edges(E);

    cout << "Введите рёбра и их веса (формат: исходная вершина, конечная вершина, вес):" << endl;
    for (int i = 0; i < E; ++i) {
        cin >> edges[i].source >> edges[i].dest >> edges[i].weight;
    }

    int start, end;
    cout << "Введите начальную вершину: ";
    cin >> start;
    cout << "Введите конечную вершину: ";
    cin >> end;

    pair<vector<int>, int> result = bellman_ford(V, edges, start, end);
    vector<int> path = result.first;
    int distance = result.second;

    if (path.empty()) {
        cout << "Путь не найден." << endl;
    } else {
        cout << "Кратчайший путь от " << start << " до " << end << ": ";
        for (int v : path) {
            cout << v << " ";
        }
        cout << "\nРасстояние: " << distance << endl;
    }

    return 0;
}
