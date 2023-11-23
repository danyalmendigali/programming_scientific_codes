#include <iostream>
#include <vector>
#include <queue>
#include <windows.h>
using namespace std;

// Нахождение цикла(матрица)

bool bfsMatrix(const vector<vector<int>>& matrix, int startVertex) {
    int n = matrix.size();
    vector<bool> visited(n, false);
    vector<int> parent(n, -1);

    queue<int> q;
    q.push(startVertex);
    visited[startVertex] = true;

    while (!q.empty()) {
        int vertex = q.front();
        q.pop();

        for (int i = 0; i < n; i++) {
            if (matrix[vertex][i] == 1) {

                if (!visited[i]) {
                    visited[i] = true;
                    q.push(i);
                    parent[i] = vertex;
                } else if (parent[vertex] != i) {
                    return true;  // Найден цикл
                }
            }
        }
    }
    return false;  // Нет циклов
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    int sizeMatrix;
    cout << "Введите размер матрицы: ";
    cin >> sizeMatrix;

    vector<vector<int>> matrix(sizeMatrix, vector<int>(sizeMatrix));

    cout << "Введите элементы матрицы:" << endl;
    for (int i = 0; i < sizeMatrix; i++) {
        for (int j = 0; j < sizeMatrix; j++) {
            cin >> matrix[i][j];
        }
    }

    bool hasCycle = bfsMatrix(matrix, 0);
    if (hasCycle) {
        cout << "Граф содержит цикл." << endl;
    } else {
        cout << "Граф не содержит циклов." << endl;
    }

    return 0;
}
