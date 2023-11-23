#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
const int INF = 1e9;

// Поиск кратчайшего пути с ограниченными ресурсами: В некоторых задачах, где ресурсы ограничены
// (например, топливо), алгоритм Дейкстры может помочь найти оптимальные пути.

void dijkstra(vector<vector<int>> &matrix, int startPoint, int endPoint, vector<int> &dist, vector<int> &path)
{
    int size_matrix = matrix.size();
    vector<bool> visited(size_matrix, false);  // Заменено на vector<bool> для хранения состояния вершин

    dist.assign(size_matrix, INF);
    path.assign(size_matrix, -1);

    dist[startPoint] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, startPoint});

    while (!pq.empty())  // Удалена лишняя точка с запятой
    {
        int u = pq.top().second;
        pq.pop();
        if (u == endPoint)
        {
            break;
        }

        if (visited[u])
        {
            continue;
        }

        visited[u] = true;

        for (int v = 0; v < size_matrix; v++)
        {
            if (matrix[u][v] != 0 && !visited[v])  // Исправлено имя переменной graph на matrix
            {
                int newDist = dist[u] + matrix[u][v];
                if (newDist < dist[v])
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
    for (int i = 0; i < size_matrix; i++)
    {
        for (int j = 0; j < size_matrix; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int startPoint, endPoint;
    cout << "Введите начальную вершину: ";
    cin >> startPoint;
    cout << "Введите конечную вершину: ";
    cin >> endPoint;

    vector<int> dist, path;
    dijkstra(matrix, startPoint, endPoint, dist, path);
    cout << "Кратчайшее расстояние: " << dist[endPoint] << "\n";

    vector<int> result;
    for (int i = endPoint; i != -1; i = path[i])
    {
        result.push_back(i);
    }
    cout << "Кратчайший путь: ";
    for (int i = result.size() - 1; i >= 0; i--)
    {
        cout << result[i] << " ";
    }
    cout << "\n";

    return 0;
}
