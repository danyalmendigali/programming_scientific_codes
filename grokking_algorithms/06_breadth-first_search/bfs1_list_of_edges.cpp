#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define VectorVector vector<vector<int>>

vector<int> bfs(vector<pair<int, int>> &edges, int startPoint, int endPoint)
{
    int n = 0;
    for (auto edge : edges)
    {
        n = max(n, max(edge.first, edge.second) + 1);
    }

    vector<bool> visited(n, false);
    vector<int> previous(n, -1);
    queue<int> q;

    q.push(startPoint);
    visited[startPoint] = true;

    while (!q.empty())
    {
        int numFront = q.front();
        q.pop();

        cout << "Обрабатываем вершину: " << numFront << "\n";

        for (auto edge : edges)
        {
            int u = edge.first;
            int v = edge.second;

            if (u == numFront && !visited[v])
            {
                q.push(v);
                visited[v] = true;
                previous[v] = numFront;
            }

            if (v == numFront && !visited[u])
            {
                q.push(u);
                visited[u] = true;
                previous[u] = numFront;
            }
        }
    }

    if (previous[endPoint] == -1)
    {
        return vector<int>();
    }

    vector<int> shortestPath;
    int currentVertex = endPoint;
    while (currentVertex != -1)
    {
        shortestPath.push_back(currentVertex);
        currentVertex = previous[currentVertex];
    }

    reverse(shortestPath.begin(), shortestPath.end());

    return shortestPath;
}

int main()
{
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n, m;
    cout << "Введите количество вершин и ребер: ";
    cin >> n >> m;

    vector<pair<int, int>> edges;

    cout << "Введите ребра в форме (u, v): " << "\n";
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        edges.push_back({u, v});
    }

    int startPoint, endPoint;
    cout << "Введите стартовую вершину: ";
    cin >> startPoint;
    cout << "Введите конечную вершину: ";
    cin >> endPoint;

    vector<int> shortestPath = bfs(edges, startPoint, endPoint);

    if (shortestPath.empty())
    {
        cout << "Кратчайший путь не найден" << "\n";
    }
    else
    {
        cout << "Кратчайший путь: ";
        for (int vertex : shortestPath)
        {
            cout << vertex << " ";
        }
        cout << "\n";
    }

    return 0;
}
