#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

// Используем макросы для удобства
#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Функция реализует DFS для поиска пути от начальной вершины до конечной.
// Возвращает true, если путь найден, и false в противном случае.
bool dfs(vector<vector<int>> &matrix, int startPoint, int endPoint, vector<bool> &visited, vector<int> &path) {
    int size_matrix = matrix.size();

    // Добавляем текущую вершину в путь
    path.push_back(startPoint);
    visited[startPoint] = true;

    // Если текущая вершина является конечной, то путь найден
    if(startPoint == endPoint) {
        return true;
    }

    // Проходим по соседям текущей вершины
    for(int i = 0; i < size_matrix; i++) {
        if(matrix[startPoint][i] == 1 && !visited[i]) {
            // Рекурсивно запускаем DFS для соседа
            if(dfs(matrix, i, endPoint, visited, path)) {
                return true; // путь найден
            }
        }
    }

    // Если путь через текущую вершину не найден, убираем ее из пути
    path.pop_back();
    return false;
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int size_matrix;
    cout << "Введите размер матрицы: ";
    cin >> size_matrix;

    vector<vector<int>> matrix(size_matrix);

    // Вводим матрицу смежности
    cout << "Заполните матрицу: " << "\n";
    for(int i = 0; i < size_matrix; i++) {
        matrix[i].resize(size_matrix);
        for(int j = 0; j < size_matrix; j++) {
            cin >> matrix[i][j];
        }
    }

    vector<bool> visited(size_matrix, false); // для отслеживания посещенных вершин
    int startPoint, endPoint;

    // Ввод начальной и конечной вершин
    cout << "Введите начальную вершину: ";
    cin >> startPoint;
    cout << "Введите конечную вершину: ";
    cin >> endPoint;

    vector<int> path; // для хранения пути

    // Пытаемся найти путь с помощью DFS
    if(dfs(matrix, startPoint, endPoint, visited, path)) {
        cout << "Путь между вершинами: ";
        for(int v : path) {
            cout << v << " ";
        }
        cout << "\n";
    } else {
        cout << "Путь между вершинами не найден" << "\n";
    }

    return 0;
}
