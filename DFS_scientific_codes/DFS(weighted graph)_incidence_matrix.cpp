#include <iostream>
#include <vector>

using namespace std;

const int INF = 1e9;

/// функция обхода в глубину
void dfs(int vertex, vector<bool>& visited, vector<vector<pair<int, int>>>& adjList) {
    visited[vertex] = true; /// помечаем вершину как посещенную
    cout << vertex << " "; /// выводим номер вершины

    for (auto neighbor : adjList[vertex]) { /// проходим по всем соседним вершинам
        int nextVertex = neighbor.first;
        int weight = neighbor.second;
        if (!visited[nextVertex]) { /// если вершина еще не посещена
            dfs(nextVertex, visited, adjList); /// рекурсивно вызываем функцию обхода для нее
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m; /// вводим количество вершин и ребер

    /// вводим матрицу инцидентности
    vector<vector<int>> incidenceMatrix(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> incidenceMatrix[i][j];
        }
    }

    /// создаем список смежности
    vector<vector<pair<int, int>>> adjList(n);
    for (int j = 0; j < m; j++) {
        int u = -1, v = -1, w = -1;
        for (int i = 0; i < n; i++) {
            if (incidenceMatrix[i][j] == 1 && u == -1) { /// нашли первую вершину ребра
                u = i;
            } else if (incidenceMatrix[i][j] == 1 && v == -1) { /// нашли вторую вершину ребра
                v = i;
            } else if (incidenceMatrix[i][j] != 0) { /// нашли вес ребра
                w = incidenceMatrix[i][j];
            }
        }
        adjList[u].push_back({v, w}); /// добавляем ребро в список смежности
        adjList[v].push_back({u, w});
    }

    vector<bool> visited(n, false); /// создаем массив для отметки посещенных вершин

    dfs(0, visited, adjList); /// вызываем функцию обхода в глубину для вершины 0

    return 0;
}
