#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define VectorVector vector<vector<int>>

// Функция для поиска кратчайшего пути между двумя вершинами в графе
// edges: список ребер в графе
// startPoint: стартовая вершина для поиска пути
// endPoint: целевая вершина, до которой нужно найти кратчайший путь

vector<int> bfs(vector<pair<int, int>> &edges, int startPoint, int endPoint)
{
    int n = 0; // n представляет количество вершин в графе

    // Определяем количество вершин в графе, находя максимальный номер вершины в списках ребер
    for(auto edge : edges)
    {
        n = max(n, max(edge.first, edge.second) + 1);
    }

    vector<bool> visited(n, false); // Создаем вектор visited, который будет отслеживать, была ли вершина посещена во время обхода
    vector<int> previous(n, -1); // Создаем вектор previous, который будет хранить информацию о предыдущей вершине в кратчайшем пути
    queue<int> q; // Создаем очередь q, которая будет использоваться для хранения вершин, которые нужно посетить

    q.push(startPoint); // Начальная вершина startPoint помещается в конец очереди q, чтобы начать обход с этой вершины
    visited[startPoint] = true; // Флаг посещения для начальной вершины startPoint устанавливается в true, так как мы её уже посетили и она находится в очереди

    while(!q.empty()) // Цикл будет выполняться, пока очередь q не станет пустой
    {
        int numFront = q.front(); // Извлекаем вершину из начала очереди q и сохраним ее в переменную numFront
        q.pop(); // Удаляем вершину из начала очереди q, так как мы ее уже посетили и обработали

        cout << "Посещена вершина: " << numFront << "\n"; // Выводим сообщение о том, что вершина numFront была посещена

        for(auto edge : edges) // Запускаем цикл для перебора всех ребер, чтобы найти смежные вершины с вершиной numFront
        {
            int u = edge.first;
            int v = edge.second;

            if(u == numFront && !visited[v]) // Проверяем, является ли вершина v смежной с вершиной numFront
            {
                q.push(v); // Если вершина v не была посещена, то добавляем ее в конец очереди q, чтобы посетить ее позже
                visited[v] = true; // Устанавливается флаг посещения для вершины v в значение true, так как мы ее добавили в очередь и посетили позже
                previous[v] = numFront; // Записываем информацию о том, что вершина v была достигнута из вершины numFront
            }

            if(v == numFront && !visited[u]) // Проверяем, является ли вершиной u смежной с вершиной numFront
            {
                q.push(u); // Если вершина u не была посещена, то добавляем ее в конец очереди q, чтобы посетить ее позже
                visited[u] = true; // Устанавливается флаг посещения для вершины u в значение true, так как мы ее добавили в очередь и посетили позже
                previous[u] = numFront; // Записываем информацию о том, что вершина u была достигнута из вершины numFront
            }
        }
    }

    // Восстановление кратчайшего пути от стартовой вершины к целевой
    vector<int> shortestPath;
    int currentVertex = endPoint;
    while(currentVertex != -1) // Пока не достигнута стартовая вершина (значение -1)
    {
        shortestPath.push_back(currentVertex); // Добавляем текущую вершину в кратчайший путь
        currentVertex = previous[currentVertex]; // Переходим к предыдущей вершине в кратчайшем пути
    }

    reverse(shortestPath.begin(), shortestPath.end()); // Обратный порядок вершин для получения пути от стартовой к целевой

    return shortestPath; // Возвращаем кратчайший путь от стартовой вершины к целевой
}

int main()
{
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n, m; // Количество вершин и ребер в графе
    cout << "Введите количество вершин и ребер: ";
    cin >> n >> m;

    vector<pair<int, int>> edges; // Создаем список ребер

    cout << "Введите ребра в форме (u, v): " << "\n";
    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        edges.push_back({u, v}); // Добавляем ребро (u, v) в список ребер
    }

    int startPoint, endPoint;
    cout << "Введите стартовую вершину: ";
    cin >> startPoint;
    cout << "Введите конечную вершину: ";
    cin >> endPoint;

    vector<int> shortestPath = bfs(edges, startPoint, endPoint); // Вызываем функцию bfs для поиска кратчайшего пути

    if(shortestPath.empty()) // Если кратчайший путь не найден
    {
        cout << "Кратчайший путь не найден" << "\n";
    }
    else // Если кратчайший путь найден
    {
        cout << "Кратчайший путь: ";
        for(int vertex : shortestPath)
        {
            cout << vertex << " "; // Выводим вершины кратчайшего пути на экран
        }
        cout << "\n";
    }

    return 0;
}
