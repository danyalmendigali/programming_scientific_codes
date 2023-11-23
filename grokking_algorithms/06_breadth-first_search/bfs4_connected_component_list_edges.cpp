#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define VectorVector vector<vector<int>>

// Функция для поиска компонент связности в графе
// edges: список ребер в графе
// n: количество вершин в графе
vector<vector<int>> findConnectedComponents(vector<pair<int, int>> &edges, int n)
{
    vector<vector<int>> connectedComponents; // Вектор для хранения компонент связности
    vector<bool> visited(n, false); // Вектор для отслеживания посещенных вершин

    for(int i = 0; i < n; i++)
    {
        if(!visited[i]) // Если вершина i не посещена, значит начинается новая компонента связности
        {
            vector <int> component; // Создаем новую компоненту связности
            queue <int> q; // Очередь для обхода вершин

            q.push(i); // Добавляем текущую вершину в очередь для обхода
            visited[i] = true; // Помечаем текущую вершину как посещенную
            while(!q.empty()) // Цикл продолжается, пока очередь не станет пустой
            {
                int currentVertex = q.front(); // Извлекаем вершину из начала очереди
                q.pop();
                component.push_back(currentVertex); // Добавляем вершину в текущую компоненту

                for(auto edge : edges) // Ищем смежные вершины с текущей вершиной
                {
                    int u = edge.first; // Вершина u первого конца ребра
                    int v = edge.second; // Вершина v второго конца ребра

                    // Проверяем, является ли вершина v смежной с текущей вершиной (currentVertex)
                    if(u == currentVertex && !visited[v])
                    {
                        q.push(v); // Добавляем вершину v в очередь для обхода
                        visited[v] = true; // Помечаем вершину v как посещенную
                    }

                    // Проверяем, является ли вершина u смежной с текущей вершиной (currentVertex)
                    if(v == currentVertex && !visited[u])
                    {
                        q.push(u); // Добавляем вершину u в очередь для обхода
                        visited[u] = true; // Помечаем вершину u как посещенную
                    }
                }
            }
            connectedComponents.push_back(component); // Добавляем текущую компоненту в список компонент связности
        }
    }

    return connectedComponents; // Возвращаем список компонент связности
}

int main()
{
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n, m;
    cout << "Введите количество вершин и ребер: ";
    cin >> n >> m;

    vector<pair<int, int>> edges; // Создаем список ребер

    cout << "Введите ребра в форме(u, v): " << "\n";
    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        edges.push_back({u, v}); // Добавляем ребро (u, v) в список ребер
    }

    vector<vector<int>> component_connected = findConnectedComponents(edges, n); // Находим компоненты связности в графе

    cout << "Компоненты связности: " << "\n";
    for(const auto &component : component_connected)
    {
        for(int vertex : component)
        {
            cout << vertex << " "; // Выводим вершины компонент связности на экран
        }
        cout << "\n";
    }

    return 0;
}
