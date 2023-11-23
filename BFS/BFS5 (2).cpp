#include <iostream>
#include <vector>
#include <limits>
#include <queue>
#include <algorithm>
#include <windows.h> // для работы с кодировкой консоли в Windows
using namespace std;

const int INF = 1e9;  // Большое число для представления бесконечности

// Обходи графа в ширину и нахождение кратчайшего пути [список ребер]


void bfs(vector<vector<int>> &matrix, int startPoint, int endPoint)
{
    int size_matrix = matrix.size();
    vector<bool> visited(size_matrix, false);  // Вектор для отметки посещенных вершин
    vector<int> pred(size_matrix, -1);  // Вектор предшествующих вершин для восстановления пути

    queue<int> q;  // Очередь для BFS
    q.push(startPoint);
    visited[startPoint] = true;
    while(!q.empty())
    {
        int numFront = q.front();
        q.pop();
        cout << "Посещена вершина: " << numFront << "\n";
        for(int i = 0; i < size_matrix; i++)
        {
            // Если вершина смежная и не посещена, добавляем в очередь
            if(matrix[numFront][i] != 0 && !visited[i])
            {
                q.push(i);
                visited[i] = true;
                pred[i] = numFront;  // Сохраняем предшествующую вершину
            }
        }
    }

    // Восстановление кратчайшего пути из конечной вершины в начальную
    vector<int> shortestWay;
    cout << "Кратчайший путь: ";
    for(int i = endPoint; i != -1; i = pred[i])
    {
        shortestWay.push_back(i);
    }
    // Вывод пути в правильном порядке
    for(int i = shortestWay.size() - 1; i >= 0; i--)
    {
        cout << shortestWay[i] << " ";
    }
    cout << "\n";
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n, m;
    cout << "Введите количество вершин: ";
    cin >> n;

    cout << "Введите количество ребер: ";
    cin >> m;

    vector<vector<int>> matrix(n, vector<int>(n, 0));
    cout << "Заполните ребра в форме(u, v): " << "\n";
    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        matrix[u][v] = 1;
        // matrix[v][u] = 1;
    }

    int startPoint, endPoint;  // Начальная и конечная вершины для поиска пути
    cout << "Введите начальную вершину: ";
    cin >> startPoint;
    cout << "Введите конечную вершину: ";
    cin >> endPoint;

    // Запуск BFS для поиска кратчайшего пути
    bfs(matrix, startPoint, endPoint);

    return 0;
}
