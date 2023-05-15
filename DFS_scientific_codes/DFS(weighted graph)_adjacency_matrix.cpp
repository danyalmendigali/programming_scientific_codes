#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int INF = 1e9;  /// Константа для обозначения бесконечности

void DFS(vector<vector<int>>& adj_matrix, vector<bool>& visited, int v) {
    visited[v] = true;  /// Помечаем текущую вершину как посещенную
    cout << v << " ";   /// Выводим номер текущей вершины

    /// Рекурсивно обходим всех соседей текущей вершины
    for(int i = 0; i < adj_matrix.size(); i++) {
        if(adj_matrix[v][i] != INF && !visited[i]) {  /// Если есть ребро и вершина еще не была посещена
            DFS(adj_matrix, visited, i);  /// Вызываем функцию DFS для соседней вершины
        }
    }
}

int main() {
    cin.tie(0);
    int n;
    cin >> n;  /// Вводим количество вершин графа

    vector<vector<int>> adj_matrix(n, vector<int>(n));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> adj_matrix[i][j];  /// Вводим матрицу смежности
        }
    }

    vector<bool> visited(n, false);  /// Создаем вектор для хранения информации о посещенных вершинах
    DFS(adj_matrix, visited, 0);     /// Вызываем функцию DFS для обхода графа в глубину, начиная с вершины 0

    return 0;

    /*
    Пример ввода:
    6

    0 5 7 0 0 0
    3 0 6 0 0 0
    2 3 0 2 4 0
    0 0 4 0 35 7
    0 0 7 34 0 0
    0 0 0 64 0 0

    Пример вывода:
    0 1 2 3 4 5

    */


}



