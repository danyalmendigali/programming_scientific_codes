#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
const int INF = 1e9;

// Задача о доставке товаров: У вас есть города и дороги между ними с указанием стоимостей перевозки.
// Найдите оптимальный маршрут для доставки товаров с минимальной стоимостью.

void dijkstra(vector<vector<int>> &matrix, int startCity, int endCity, vector<int> &dist, vector<int> &path)
{
    int size_matrix = matrix.size();
    vector<bool> visited(size_matrix, false);

    dist.assign(size_matrix, INF);
    path.assign(size_matrix, -1);

    priority_queue<pair<int, int>, vector<pair<int ,int>>, greater<pair<int, int>>> pq;
    pq.push({0, startCity});

    dist[startCity] = 0;

    while(!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        if(u == endCity)
        {
            break;
        }
        if(visited[u])
        {
            continue;
        }

        visited[u] = true;

        for(int v = 0; v < size_matrix; v++)
        {
            if(matrix[u][v] != 0 && !visited[v])
            {
                int newDist = dist[u] + matrix[u][v];
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
    cout << "Введите количество городов: ";
    cin >> size_matrix;

    vector<vector<int>> matrix(size_matrix, vector<int>(size_matrix, 0));

    cout << "Введите матрицу дороги и городов: " << "\n";
    for(int i = 0; i < size_matrix; i++)
    {
        for(int j = 0; j < size_matrix; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int startPoint, endPoint;
    cout << "Введите номер начального города: ";
    cin >> startPoint;
    cout << "Введите номер конечного города: ";
    cin >> endPoint;

    vector<int> dist, path;

    dijkstra(matrix, startPoint, endPoint, dist, path);

    vector<int> result;
    cout << "Самый оптимальный маршрут составит " << dist[endPoint] << " киллометров" << "\n";
    cout << "Вот ваш маршрут по номерам городов: ";

    for(int i = endPoint; i != -1; i = path[i])
    {
        result.push_back(i);
    }

    for(int i = result.size() - 1; i >= 0; i--)
    {
        cout << result[i] << " ";
    }
    cout << "\n";









    return 0;
}
