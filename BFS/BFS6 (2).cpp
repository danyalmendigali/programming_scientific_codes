#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define VectorVector vector<vector<int>>

// Обход графа в ширину и нахождение компонентов связности [список ребер]


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
        matrix[v][u] = 1;
    }
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
