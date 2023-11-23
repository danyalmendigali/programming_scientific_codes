#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define VectorVector vector<vector<int>>

// Функция обхода в ширину BFS (Breadth-First Search)
// matrix: матрица смежности графа
// startPoint: начальная вершина для обхода
// endPoint: конечная вершина для поиска кратчайшего пути

void bfs(vector<vector<int>> &matrix, int startPoint, int endPoint)
{
    int size_matrix = matrix.size(); // Получаем размер матрицы (кол-во вершин)
    vector<bool> visited(size_matrix, 0); // Вектор для отслеживания посещенных вершин
    vector<int> prog(size_matrix, -1); // Вектор для хранения предшественников вершин в кратчайшем пути

    queue <int> q; // Очередь для обхода в ширину

    q.push(startPoint); // Помещаем начальную вершину в очередь
    visited[startPoint] = true; // Помечаем начальную вершину как посещенную

    while(!q.empty())
    {
        int numFront = q.front(); // Извлекаем вершину из начала очереди
        q.pop();
        cout << "Посещена вершина: " << numFront << "\n"; // Выводим на экран номер посещенной вершины

        // Перебираем все вершины и ищем смежные с текущей вершиной numFront
        for(int i = 0; i < size_matrix; i++)
        {
             if(matrix[numFront][i] == 1 && !visited[i]) // Если вершина i смежная с текущей и еще не посещена
             {
                 q.push(i); // Добавляем вершину i в очередь для дальнейшего обхода
                 visited[i] = true; // Помечаем вершину i как посещенную
                 prog[i] = numFront; // Запоминаем, что вершина i была посещена из вершины numFront
             }
        }
    }

    // Формируем кратчайший путь от конечной вершины к начальной, используя предшественников
    vector<int> result;
    for(int i = endPoint; i != -1; i = prog[i])
    {
        result.push_back(i); // Добавляем вершины в обратном порядке (от конечной к начальной)
    }

    // Выводим кратчайший путь на экран
    cout << "Кратчайший путь: ";
    for(int i = result.size() - 1; i >= 0; i--)
    {
        cout << result[i] << " ";
    }
    cout << "\n";
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int size_matrix;
    cout << "Введите размер матрицы: ";
    cin >> size_matrix;

    vector<vector<int>> matrix(size_matrix);

    cout << "Введите матрицу смежности: " << "\n";
    for(int i = 0; i < size_matrix; i++)
    {
        matrix[i].resize(size_matrix);
        for(int j = 0; j < size_matrix; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int startPoint, endPoint;

    cout << "Введите начальную вершину: ";
    cin >> startPoint;
    cout << "Введите конечную вершину: ";
    cin >> endPoint;

    bfs(matrix, startPoint, endPoint); // Вызываем функцию обхода в ширину

    return 0;
}
