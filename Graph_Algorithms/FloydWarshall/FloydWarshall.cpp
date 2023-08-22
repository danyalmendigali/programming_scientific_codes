#include <iostream>
#include <vector>
using namespace std;

const int INF = 1e9;

// Алгоритм Флойда-Уоршелла

vector<vector<int>> floydWarshall(const vector<vector<int>>& matrix) {
    int n = matrix.size();
    vector<vector<int>> dist = matrix;

    // Инициализация
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i != j && dist[i][j] == 0) {
                dist[i][j] = INF;
            }
        }
    }

    // Алгоритм Флойда-Уоршелла
    for (int k = 0; k < n; ++k) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (dist[i][k] < INF && dist[k][j] < INF) {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }

    return dist;
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));
    // Чтение матрицы смежности
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    vector<vector<int>> dist = floydWarshall(matrix);

    // Вывод результата
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (dist[i][j] == INF) {
                cout << "INF ";  // Выводим INF вместо бесконечности
            } else {
                cout << dist[i][j] << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}
