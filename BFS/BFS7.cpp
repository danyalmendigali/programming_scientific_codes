#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Функция обхода графа в ширину с проверкой наличия цикла(матрица)

bool bfsMatrix(const vector<vector<int>>& matrix, int startPoint) // startPoint - Начальная вершина для начала обхода
{
    // Определение размера матрицы (число вершин в графе)
    int n = matrix.size();

    // Вектор для отметки посещенных вершин
    vector<bool> visited(n, false);

    // Вектор для хранения родителей каждой вершины
    vector<int> parent(n, -1);

    // Очередь для BFS
    queue<int> q;

    // Начальная вершина добавляется в очередь
    q.push(startPoint);
    visited[startPoint] = true;

    // Основной цикл BFS
    while(!q.empty()) {
        int numFront = q.front();
        q.pop();

        // Отображение текущей вершины
        cout << "Посещена вершина: " << numFront << "\n";

        // Перебор всех соседних вершин текущей вершины
        for(int i = 0; i < n; i++) {
            // Если соседняя вершина соединена ребром с текущей вершиной
            if(matrix[numFront][i] == 1) {
                // Если вершина не была посещена
                if(!visited[i]) {
                    visited[i] = true;
                    q.push(i);
                    parent[i] = numFront;  // Устанавливаем текущую вершину как родительскую для соседней
                }
                // Если вершина уже посещена и она не родительская для текущей, то граф содержит цикл
                else if(parent[numFront] != i) {
                    return true;
                }
            }
        }
    }

    // Если граф не содержит циклов, возвращаем false
    return false;
}

int main() {
    // Настройка кодировки консоли для корректного отображения русских символов
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    // Ввод размера матрицы (число вершин в графе)
    int size_matrix;
    cout << "Введите размер матрицы: ";
    cin >> size_matrix;

    // Создание матрицы смежности
    vector<vector<int>> matrix(size_matrix);

    cout << "Введите матрицу: " << "\n";
    // Заполнение матрицы
    for(int i = 0; i < size_matrix; i++)
    {
        matrix[i].resize(size_matrix);
        for(int j = 0; j < size_matrix; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // Ввод начальной вершины для обхода
    int startPoint;
    cout << "Введите начальную вершину: ";
    cin >> startPoint;

    // Проверка наличия цикла в графе
    bool containsCycle = bfsMatrix(matrix, startPoint);
    if(containsCycle) {
        cout << "Граф содержит цикл.\n";
    } else {
        cout << "Граф не содержит циклов.\n";
    }

    return 0;
}
