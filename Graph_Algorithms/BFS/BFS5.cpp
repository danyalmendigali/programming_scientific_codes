#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Топологическая сортировка без циклов dag (BFS)

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int size_matrix;
    cout << "Введите размер матрицы (количество вершин в графе): ";
    cin >> size_matrix;

    vector<vector<int>> matrix(size_matrix);
    cout << "Заполните матрицу смежности (1 если есть ребро, 0 если нет): " << "\n";
    for(int i = 0; i < size_matrix; i++) {
        matrix[i].resize(size_matrix);
        for(int j = 0; j < size_matrix; j++) {
            cin >> matrix[i][j];
        }
    }

    vector<int> inDegree(size_matrix, 0);

    // Вычисляем входную степень каждой вершины
    for(int i = 0; i < size_matrix; i++) {
        for(int j = 0; j < size_matrix; j++) {
            if(matrix[i][j]) {
                inDegree[j]++;
            }
        }
    }

    queue<int> q;
    // Добавляем все вершины с входной степенью 0 в очередь
    for (int i = 0; i <     size_matrix; i++) {
        if (inDegree[i] == 0) {
            q.push(i);
        }
    }

    vector<int> topOrder;

    while (!q.empty()) {
        int curr = q.front();
        q.pop();

        topOrder.push_back(curr);

        // Уменьшаем входную степень соседей текущей вершины
        for (int i = 0; i < size_matrix; i++) {
            if (matrix[curr][i]) {
                inDegree[i]--;
                if (inDegree[i] == 0) {
                    q.push(i);
                }
            }
        }
    }

    // Результат топологической сортировки
    cout << "Топологическая сортировка: ";
    for (int i = 0; i < topOrder.size(); i++) {
        cout << topOrder[i] << " ";
    }
    cout << "\n";

    return 0;
}


