#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Реализация обхода графа в ширину (BFS) по списку ребер.

void bfsEdgeList(vector<pair<int, int>>& edges, int startPoint)
{
    int n = 0;

    // Находим количество вершин в графе, находя максимальный номер вершины в списках ребер.
    for (auto edge : edges)
    {
        n = max(n, max(edge.first, edge.second) + 1);
    }

    // Создаем вектор visited, который будет отслеживать, была ли вершина посещена во время обхода.
    vector<bool> visited(n, false);

    // Создаем очередь q, которая будет использоваться для хранения вершин, которые нужно посетить.
    queue<int> q;

    // Начальная вершина startPoint помещается в конец очереди q, чтобы начать обход с этой вершины.
    q.push(startPoint);

    // Флаг посещения для начальной вершины startPoint устанавливается в true, так как мы её уже посетили и она находится в очереди.
    visited[startPoint] = true;

    while (!q.empty())
    {
        int numFront = q.front(); // Извлекаем вершину из начала очереди q и сохраняем её в переменную numFront.
        q.pop(); // Удаляем вершину из начала очереди q, так как мы её уже посетили и обработали.

        cout << "Посещена вершина: " << numFront << "\n";

        for (auto edge : edges)
        {
            int u = edge.first;
            int v = edge.second;

            // Проверяем, является ли вершина v смежной с вершиной numFront.
            if (u == numFront && !visited[v])
            {
                // Если вершина v не была посещена, то добавляем её в конец очереди q, чтобы посетить её позже.
                q.push(v);

                // Устанавливаем флаг посещения для вершины v в значение true, так как мы её добавили в очередь и посетим позже.
                visited[v] = true;
            }

            // Проверяем, является ли вершина u смежной с вершиной numFront.
            if (v == numFront && !visited[u])
            {
                // Если вершина u не была посещена, то добавляем её в конец очереди q, чтобы посетить её позже.
                q.push(u);

                // Устанавливаем флаг посещения для вершины u в значение true, так как мы её добавили в очередь и посетим позже.
                visited[u] = true;
            }
        }
    }
}

int main()
{
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n, m; // Количество вершин и ребер в графе.
    cout << "Введите количество вершин и ребер: ";
    cin >> n >> m;

    vector<pair<int, int>> edges; // Создаем список ребер.

    cout << "Введите ребра в форме (u, v): " << endl;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        edges.push_back({u, v});
    }

    int startVertex = 0; // Начальная вершина для обхода.

    bfsEdgeList(edges, startVertex);

    return 0;
}
