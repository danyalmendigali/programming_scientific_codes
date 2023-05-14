#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

/// Функция для обхода графа в глубину
void DFS(vector<vector<int>>& adj_matrix, vector <bool>& visited, int v) {
   visited[v] = true;  /// Помечаем текущую вершину как посещенную
   cout << v << " ";

   /// Рекурсивно обходим всех соседей текущей вершины
   for(int i = 0; i < adj_matrix.size(); i++) {
    if(adj_matrix[v][i] == 1 && !visited[i]) {
        DFS(adj_matrix, visited, i);
     }
   }
}


int main() {
    cin.tie(0);
    int n;
    cin >> n; /// Вводим число вершин графа

    vector<vector<int>> adj_matrix(n, vector <int>(n));  /// Создаем матрицу смежности графа
    for(int i = 0; i < n; i++) {
        for(int j = 0;j < n; j++) {
            cin >> adj_matrix[i][j]; /// Вводим матрицу смежности
        }
    }

    vector <bool> visited(n, false); /// Создаем вектор для хранения информации о посещенных вершинах

    DFS(adj_matrix, visited, 0); /// Обходим все вершины графа в глубину, начиная с вершины 0


    /*
    Пример ввода:
    6

    0 1 1 0 0 0
    1 0 1 0 0 0
    1 1 0 1 1 0
    0 0 1 0 1 1
    0 0 1 1 0 0
    0 0 0 1 0 0

    Пример вывода:
    0 1 2 3 4 5

    */


   return 0;
}
