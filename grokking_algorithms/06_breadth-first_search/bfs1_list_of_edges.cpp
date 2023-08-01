#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Реализцаия BFS списком ребер

void bfsEdgeList(vector<pair<int, int>> &edges, int startPoint)
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

int main()
{
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n, m;
    cout << "Введите количество вершин и ребер: ";
    cin >> n >> m;

    vector<pair<int, int>> edges;

    cout << "Введите ребра в форме(u, v): " << endl;
    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        edges.push_back({u, v});
    }

    int startVertex = 0;

    bfsEdgeList(edges, startVertex);




    return 0;
}
