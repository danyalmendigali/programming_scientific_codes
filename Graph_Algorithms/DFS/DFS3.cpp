#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

// Макросы для короткой записи
#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Функция обхода графа в глубину и нахождения компонент связности (DFS)
void dfsMatrix(const vector<vector<int>> &matrix, int startPoint, vector<bool>& visited) {
    int size_matrix = matrix.size(); // Определение размера матрицы

    visited[startPoint] = true; // Отметка начальной вершины как посещенной

    // Цикл по всем вершинам
    for (int i = 0; i < size_matrix; i++) {
        // Если вершина смежна с начальной и еще не была посещена
        if (matrix[startPoint][i] == 1 && !visited[i]) {
            dfsMatrix(matrix, i, visited); // Рекурсивный вызов функции для этой вершины
        }
    }
}

int main() {
    // Установка кодировки для корректного отображения русских символов
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int sizeMatrix;
    cout << "Введите размер матрицы: ";
    cin >> sizeMatrix; // Считывание размера матрицы смежности

    vector<vector<int>> matrix(sizeMatrix); // Инициализация матрицы смежности

    // Заполнение матрицы смежности
    cout << "Введите элементы матрицы:" << endl;
    for (int i = 0; i < sizeMatrix; i++) {
        matrix[i].resize(sizeMatrix);
        for (int j = 0; j < sizeMatrix; j++) {
            cin >> matrix[i][j]; // Считывание элемента матрицы
        }
    }

    vector<bool> visited(sizeMatrix, false); // Вектор для отслеживания посещенных вершин
    int componentsCount = 0; // Счетчик компонент связности

    // Проверка каждой вершины графа
    for(int i = 0; i < sizeMatrix; i++) {
        // Если вершина еще не была посещена
        if (!visited[i]) {
            dfsMatrix(matrix, i, visited); // Запуск обхода в глубину из этой вершины
            componentsCount++; // Увеличение счетчика компонент связности
        }
    }

    // Вывод результата
    cout << "Количество компонент связности: " << componentsCount << endl;

    return 0;
}
