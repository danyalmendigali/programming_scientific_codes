#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int INF = 1e9;

// Рекурсивная функция DFS
void DFS(vector<vector<int>>& inc_matrix, vector<bool>& visited, int v) {
    visited[v] = true;
    cout << v << " ";

    // Перебираем все ребра, инцидентные вершине v
    for(int j = 0; j < inc_matrix[v].size(); j++) {
        if(inc_matrix[v][j] == 1) { // если ребро существует
            // Перебираем все вершины, смежные с ребром
            for(int i = 0; i < inc_matrix.size(); i++) {
                // Если вершина i не является текущей вершиной v
                // И ребро инцидентно и вершине i и вершине v
                // И вершина i еще не посещена, то запускаем DFS от i
                if(i != v && inc_matrix[i][j] == 1 && !visited[i]) {
                    DFS(inc_matrix, visited, i);
                }
            }
        }
    }
}

int main() {
    cin.tie(0);
    int n, m;
    cin >> n >> m;

    // Чтение матрицы инцидентности
    vector<vector<int>> inc_matrix(n, vector<int>(m));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> inc_matrix[i][j];
        }
    }

    // Инициализация массива visited
    vector<bool> visited(n, false);

    // Запуск DFS от вершины 0
    DFS(inc_matrix, visited, 0);

    /*
    Пример ввода:
    4 4
    1 0 1 0
    1 1 0 0
    0 1 1 0
    0 0 1 1

    Пример вывода:
    0 1 2 3
    */

    return 0;
}
