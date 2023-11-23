#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
const int INF = 1e9;

void dijkstra(vector<vector<int>> &graph, int startPoint, vector<int> &dist)
{
    int size_graph = graph.size();
    vector<bool> visited(size_graph, 0);

    dist.assign(size_graph, INF);

    dist[startPoint] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int ,int>>> pq;
    pq.push({0, startPoint});

    while(!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();

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

    int size_matrix;
    cout << "Введите размер матрицы: ";
    cin >> size_matrix;

    vector<vector<int>> matrix(size_matrix, vector<int>(size_matrix, 0));
    cout << "Введите матрицу: " << "\n";
    for(int i = 0; i < size_matrix; i++)
    {
        for(int j = 0; j < size_matrix; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int diameter = 0;

    for(int i = 0; i < size_matrix; i++)
    {
        vector<int> dist;

        dijkstra(matrix, i, dist);

        int maxDist = *max_element(dist.begin(), dist.end());
        diameter = max(diameter, maxDist);
    }

    cout << "Диаметр графа: " << diameter << "\n";






    return 0;
}
