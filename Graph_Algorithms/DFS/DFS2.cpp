#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Обход графа в глубину и проверка связности графа(DFS)

void dfsMatrix(const vector<vector<int>> &matrix, int startPoint, vector<bool>& visited) {
    int size_matrix = matrix.size();

    // Помечаем текущую вершину как посещённую
    visited[startPoint] = true;

    cout << "Посещена вершина: " << startPoint << "\n";

    // Проверка соседних вершин
    for (int i = 0; i < size_matrix; i++) {
        // Если вершина смежна с текущей и ещё не была посещена
        if (matrix[startPoint][i] == 1 && !visited[i]) {
            dfsMatrix(matrix, i, visited);  // Рекурсивный вызов функции для этой вершины
        }
    }
}

// Функция для проверки связности графа
bool checkGraphConnectivity(const vector<vector<int>>& matrix) {
    int sizeMatrix = matrix.size();
    vector<bool> visited(sizeMatrix, false);  // Вектор для отслеживания посещённых вершин

    // Начнем обход с первой вершины
    dfsMatrix(matrix, 0, visited);

    // Проверяем все вершины: если хотя бы одна не посещена, граф не связный
    for(bool v : visited) {
        if(!v) {
            return false;
        }
    }

    return true;
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int sizeMatrix;
    cout << "Введите размер матрицы: ";
    cin >> sizeMatrix;

    vector<vector<int>> matrix(sizeMatrix);  // Матрица смежности графа

    cout << "Введите элементы матрицы:" << endl;
    for (int i = 0; i < sizeMatrix; i++) {
        matrix[i].resize(sizeMatrix);
        for (int j = 0; j < sizeMatrix; j++) {
            cin >> matrix[i][j];  // Ввод элементов матрицы
        }
    }

    // Проверка связности графа и вывод результата
    if (checkGraphConnectivity(matrix)) {
        cout << "Граф связный." << endl;
    } else {
        cout << "Граф несвязный." << endl;
    }

    return 0;
}
