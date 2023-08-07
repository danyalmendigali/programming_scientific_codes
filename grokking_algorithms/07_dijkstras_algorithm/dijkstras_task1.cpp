#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
const int INF = 1e9;

// Путешествие между городами: Вам даны города и дороги между ними с указанием расстояний. Найдите кратчайший путь между двумя городами.

void dijkstra(vector<vector<int>> &graph, int startPoint, int endPoint, vector<int> &dist, vector<int> &path)
{
    int size_graph = graph.size();
    vector<bool> visited(size_graph, false);
    dist.assign(size_graph, INF);
    path.assign(size_graph, -1);

    dist[startPoint] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, startPoint});

    while(!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        if(u == endPoint)
        {
            break;
        }

        if(visited[u])
        {
            continue;
        }

        visited[u] = true;

        for(int v = 0; v < size_graph; v++)
        {
            if(graph[u][v] != 0 && !visited[v])
            {
                int newDist = dist[u] + graph[u][v];
                if(newDist < dist[v])
                {
                    dist[v] = newDist;
                    path[v] = u;
                    pq.push({dist[v], v});
                }
            }
        }
    }

}



int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int size_graph;
    cout << "Введите размер матрицы: ";
    cin >> size_graph;
    vector<vector<int>> graph(size_graph, vector<int>(size_graph, 0));

    cout << "Введите матрицу: " << "\n";
    for(int i = 0; i < size_graph; i++)
    {
        for(int j = 0; j < size_graph; j++)
        {
            cin >> graph[i][j];
        }
    }

    int startPoint, endPoint;
    cout << "Введите начальную вершину: ";
    cin >> startPoint;
    cout << "Введите конечную вершину: ";
    cin >> endPoint;

    vector<int> dist, path;

    dijkstra(graph, startPoint, endPoint, dist, path);

    vector<int> result;
    for(int i = endPoint; i != -1; i = path[i])
    {
        result.push_back(i);
    }

    cout << "\n";
    cout << "Кратчайшее расстояние: " << dist[endPoint] << "\n\n";

    cout << "Кратчайший путь: ";
    for(int i = result.size() - 1; i >= 0; i--)
    {
        cout << result[i] << " ";
    }
    cout << "\n";










    return 0;
}
