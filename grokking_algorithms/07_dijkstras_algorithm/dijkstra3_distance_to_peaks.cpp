#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
const int INF = 1e9;

void dijkstra(vector<vector<int>> &graph, int startPoint,  vector<int> &dist, vector<int> &path)
{
    int size_matrix = graph.size();
    vector<bool> visited(size_matrix, false);

    dist.assign(size_matrix, INF);
    path.assign(size_matrix, -1);

    dist[startPoint] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
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

        for(int v = 0; v < size_matrix; v++)
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

    int startPoint;
    cout << "Введите начальную вершину: ";
    cin >> startPoint;

    vector<vector<int>> allDistance(size_matrix);
    vector<vector<int>> allPaths(size_matrix);

    for(int i = 0; i < size_matrix; i++)
    {
        vector<int> dist, path;
        dijkstra(matrix, i, dist, path);
        allDistance[i] = dist;
        allPaths[i] = path;
    }


    for(int i = 0; i < size_matrix; i++)
    {
        cout << "\n";
        cout << "Кратчайшие расстояния от вершины " << startPoint << " до " << i << ": " << allDistance[startPoint][i] << "\n";
        cout << "\n";
        cout << "Кратчайший путь: ";
        vector<int> result;
        for (int j = i; j != -1; j = allPaths[startPoint][j]) {
            result.push_back(j);
        }
        reverse(result.begin(), result.end());
        for (int j : result) {
            cout << j << " ";
        }
        cout << "\n";
    }






    return 0;
}
