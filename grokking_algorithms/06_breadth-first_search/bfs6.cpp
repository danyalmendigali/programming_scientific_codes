#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Реализация BFS списком смежности

const int INF = 1e9;

pair<vector <int>, vector <int>> bfs(vector<vector<int>> &graph, int start)
{
    vector <int> dist(graph.size(), INF);
    vector <int> from(graph.size(), -1);
    queue <int > q;

    dist[start] = 0;
    q.push(start);

    while(!q.empty())
    {
        int v = q.front();
        q.pop();

        for(int to : graph[v])
        {
            if(dist[to] > dist[v] + 1)
            {
                dist[to] = dist[v] + 1;
                from[to] = v;
                q.push(to);
            }
        }
    }

    return {dist, from};
}

vector <int> getPath(vector <int> &from, int finish)
{
    vector <int> path;
    for(int v = finish; v != -1; v = from[v])
    {
        path.push_back(v);
    }
    reverse(path.begin(), path.end());
    return path;
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    cout << "Введите количество вершин: ";
    int vertexCount, edgeCount;
    cin >> vertexCount;
    cout << "Введите количество узлов: ";
    cin >> edgeCount;


    vector<vector<int>> graph(vertexCount);

    for(int i = 0; i < edgeCount; i++)
    {
        int a, b;
        cin >> a >> b;

        graph[a].push_back(b);
        graph[b].push_back(a);
    }


    cout << "Введите начальную вершину: ";
    int start;
    cin >> start;
    auto [dist, from]  = bfs(graph, start);

    for(int v : getPath(from, 4))
    {
        cout << v << " ";
    }





    return 0;
}

