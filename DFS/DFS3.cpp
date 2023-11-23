#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Функция для преобразования списка смежности в матрицу смежности
vector<vector<int>> listToMatrix(const vector<vector<int>>& adjList) {
    int numVertices = adjList.size();  // Получаем количество вершин из размера списка смежности
    // Создаем пустую матрицу смежности размером numVertices x numVertices и заполняем ее нулями
    vector<vector<int>> matrix(numVertices, vector<int>(numVertices, 0));

    // Перебираем все вершины в списке смежности
    for (int i = 0; i < numVertices; i++) {
        // Для каждой вершины i перебираем все ее соседние вершины
        for (int neighbor : adjList[i]) {
            // В матрице смежности отмечаем, что вершина i смежна с вершиной neighbor
            matrix[i][neighbor] = 1;
        }
    }

    return matrix;  // Возвращаем полученную матрицу смежности
}

// Функция обхода графа в глубину, используя матрицу смежности
void dfsMatrix(const vector<vector<int>>& matrix, int startPoint, vector<bool>& visited) {
    int size_matrix = matrix.size();  // Получаем размер матрицы

    // Отмечаем начальную вершину как посещенную
    visited[startPoint] = true;

    // Выводим информацию о том, что вершина была посещена
    cout << "Посещена вершина: " << startPoint << "\n";

    // Перебираем все вершины в матрице
    for (int i = 0; i < size_matrix; i++) {
        // Если текущая вершина смежна с начальной и еще не была посещена
        if (matrix[startPoint][i] == 1 && !visited[i]) {
            // Вызываем функцию обхода графа в глубину для текущей вершины
            dfsMatrix(matrix, i, visited);
        }
    }
}

// Главная функция
int main() {
    // Устанавливаем связь с потоком ввода
    cin.tie(nullptr);
    // Устанавливаем кодировку консоли на UTF-8 для корректного отображения кириллицы
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numVertices;  // Переменная для хранения количества вершин
    // Запрашиваем у пользователя количество вершин
    cout << "Введите количество вершин: ";
    cin >> numVertices;

    // Создаем список смежности для графа
    vector<vector<int>> adjList(numVertices);

    // Запрашиваем у пользователя список смежности для каждой вершины
    cout << "Введите список смежности для каждой вершины (перечислите соседние вершины, заканчивая список для вершины значением -1):" << endl;
    for (int i = 0; i < numVertices; i++) {
        // Выводим текущую вершину
        cout << "Вершина " << i << ": ";
        // Вводим соседние вершины, пока не введем значение -1
        while (true) {
            int v;
            cin >> v;
            if (v == -1) break;
            adjList[i].push_back(v);
        }
    }

    // Преобразуем список смежности в матрицу смежности
    vector<vector<int>> matrix = listToMatrix(adjList);

    // Создаем вектор для отслеживания посещенных вершин
    vector<bool> visited(numVertices, false);

    int startPoint;  // Переменная для хранения начальной вершины
    // Запрашиваем у пользователя начальную вершину
    cout << "Введите начальную вершину: ";
    cin >> startPoint;
    // Запускаем функцию обхода графа в глубину, используя матрицу смежности
    dfsMatrix(matrix, startPoint, visited);

    return 0;  // Завершаем программу
}
