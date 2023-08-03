#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define VectorVector vector<vector<int>>

// Обход графа в ширину(список ребер)

void bfs(vector<pair<int, int>> &edges, int startPoint)
{
    int n = 0;
    for(auto edge : edges)
    {
        n = max(n, max(edge.first, edge.second) + 1);
    }

    vector <bool> visited(n, false);
    queue <int> q;

    q.push(startPoint);
    visited[startPoint] = true;

    while(!q.empty())
    {
        int numFront = q.front();
        q.pop();
        cout << "Посещена вершина: " << numFront << "\n";
        for(auto edge : edges)
        {
            int u = edge.first;
            int v = edge.second;

            if(u == numFront && !visited[v])
            {
                q.push(v);
                visited[v] = true;
            }

            if(v == numFront && !visited[u])
            {
                q.push(u);
                visited[u] = true;
            }
        }
    }
}

int main() {
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

    int startPoint = 0;
    bfs(edges, startPoint);





    return 0;
}
