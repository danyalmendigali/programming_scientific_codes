#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Обход графа в глубину(DFS)

void dfsMatrix(const vector<vector<int>> &matrix, int startPoint, vector<bool>& visited) {
    int size_matrix = matrix.size(); // Определение размера матрицы

    visited[startPoint] = true; // Отметить вершину как посещенную

    cout << "Посещена вершина: " << startPoint << "\n"; // Вывод сообщения о посещенной вершине

    // Цикл для проверки соседних вершин
    for (int i = 0; i < size_matrix; i++) {
        // Если вершина смежна и еще не посещена
        if (matrix[startPoint][i] == 1 && !visited[i]) {
            dfsMatrix(matrix, i, visited); // Рекурсивный вызов функции для этой вершины
        }
    }
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int sizeMatrix;
    cout << "Введите размер матрицы: ";
    cin >> sizeMatrix; // Ввод размера матрицы

    vector<vector<int>> matrix(sizeMatrix); // Инициализация матрицы заданного размера

    cout << "Введите элементы матрицы:" << endl;
    for (int i = 0; i < sizeMatrix; i++) {
        matrix[i].resize(sizeMatrix); // Изменение размера строки матрицы
        for (int j = 0; j < sizeMatrix; j++) {
            cin >> matrix[i][j]; // Ввод элементов матрицы
        }
    }

    vector<bool> visited(sizeMatrix, false); // Вектор для отслеживания посещенных вершин

    int startPoint;
    cout << "Введите начальную вершину: ";
    cin >> startPoint;
    dfsMatrix(matrix, startPoint, visited); // Запуск функции обхода графа в глубину

    return 0;
}

