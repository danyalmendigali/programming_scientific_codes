#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)  // Макрос для цикла от a до b
#define VectorVector vector<vector<int>>  // Макрос для короткого написания типа

// Обход графа в ширину(список ребер) и нахождение компонентов связности

// Конвертация списка ребер в матрицу смежности
vector<vector<int>> convert(vector<pair<int, int>> &edges, int size_matrix)
{
    // Инициализация матрицы нулями
    vector<vector<int>> matrix(size_matrix, vector<int>(size_matrix, 0));
    for(const auto edge : edges)
    {
        int u = edge.first;
        int v = edge.second;
        matrix[u][v] = 1;
        matrix[v][u] = 1;
    }

    return matrix;
}

// Обход графа в ширину и определение компонент связности
void bfs(vector<vector<int>> &matrix, int startPoint, vector<int> &component)
{
    int size_matrix = matrix.size();
    vector<bool> visited(size_matrix, false);

    queue<int> q;
    q.push(startPoint);
    visited[startPoint] = true;

    while(!q.empty())
    {
        int numFront = q.front();
        q.pop();
        cout << "Посещена вершина: " << numFront << "\n";
        for(int i = 0; i < size_matrix; i++)
        {
            if(matrix[numFront][i] != 0 && !visited[i])
            {
                q.push(i);
                visited[i] = true;
            }
        }
    }

    for(int i = 0; i < size_matrix; i++)
    {
        if(visited[i])
        {
            component.push_back(i);
        }
    }
}

int main()
{
    // Настройка кодировки консоли для корректного вывода кириллицы
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n, m;  // n - число вершин, m - число рёбер

    cout << "Введите количество вершин: ";
    cin >> n;
    cout << "Введите количество ребер: ";
    cin >> m;

    vector<pair<int, int>> edges(m);  // Список рёбер

    cout << "Введите ребра в форме(u, v): " << "\n";
    for(auto edge : edges)
    {
        int u, v;  // u - начало ребра, v - конец ребра
        cin >> u >> v;
        edges.push_back({u, v});
    }

    vector<vector<int>> matrix = convert(edges, n);  // Конвертация списка рёбер в матрицу смежности
    int size_matrix = matrix.size();

    vector<vector<int>> components;  // Список компонент связности
    vector<bool> visited(size_matrix, false);

    for(int i = 0; i < size_matrix; i++)
    {
        if(!visited[i])
        {
            vector<int> component;
            bfs(matrix, i, component);  // Запуск BFS для каждой вершины
            components.push_back(component);
            for(int node : component)
            {
                visited[node] = true;
            }
        }
    }

    cout << "Компоненты связности: " << "\n";
    for(const  vector<int> component : components)
    {
        for(int node : component)
        {
            cout << node << " ";
        }
        cout << "\n";
    }

    return 0;
}
