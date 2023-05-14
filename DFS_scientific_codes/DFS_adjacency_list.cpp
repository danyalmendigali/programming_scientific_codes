#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

/// Функция для обхода графа в глубину
void DFS(vector<vector<int>>& adj_list, vector <bool>& visited, int v) {
    visited[v] = true;  /// Помечаем текущую вершину как посещенную
    cout << v << " ";

    /// Рекурсивно обходим всех соседей текущей вершины
    for(int i = 0; i < adj_list[v].size(); i++) {
        int u = adj_list[v][i];
        if(!visited[u]) {
            DFS(adj_list, visited, u);
        }
    }
}

int main() {
    cin.tie(0);
    int n, m;
    cin >> n >> m; /// Вводим число вершин и число ребер графа

    vector<vector<int>> adj_list(n);  /// Создаем список смежности графа
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);  /// Добавляем ребро в список смежности
        adj_list[v].push_back(u);  /// Добавляем обратное ребро, если граф неориентированный
    }

    vector <bool> visited(n, false); /// Создаем вектор для хранения информации о посещенных вершинах

    DFS(adj_list, visited, 0); /// Обходим все вершины графа в глубину, начиная с вершины 0

    /*
    Пример ввода:
    6 8
    0 1
    0 2
    1 2
    1 3
    2 3
    2 4
    3 4
    4 5

    Пример вывода:
    0 1 2 3 4 5
    */






     /*
    Пример ввода:
    4 5

    0 1
    0 3
    1 3
    1 2
    3 2

    Пример вывода:
    0 1 3 2
    */

   return 0;
}
