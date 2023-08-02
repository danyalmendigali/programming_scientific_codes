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
    vector<vector<int>> connectedComponents;
    vector<bool> visited(n, false);

    for(int i = 0; i < n; i++)
    {
        if(!visited[i])
        {
            vector <int> component;
            queue <int> q;

            q.push(i);
            visited[i] = true;
            while(!q.empty())
            {
                int currentVertex = q.front();
                q.pop();
                component.push_back(currentVertex);
                for(auto edge : edges)
                {
                    int u = edge.first;
                    int v = edge.second;
                    if(u == currentVertex && !visited[v])
                    {
                        q.push(v);
                        visited[v] = true;
                    }

                    if(v == currentVertex && !visited[u])
                    {
                        q.push(u);
                        visited[u] = true;
                    }
                }
            }
            connectedComponents.push_back(component);
        }
    }

    return connectedComponents;
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

    cout << "Введите ребра в форме(u, v): " << "\n";
    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        edges.push_back({u, v});
    }


    vector<vector<int>> component_connected = findConnectedComponents(edges, n);

    cout << "Компоненты связности: " << "\n";
    for(const auto &component : component_connected)
    {
        for(int vertex : component)
        {
            cout << vertex << " ";
        }
        cout << "\n";
    }



    return 0;
}
