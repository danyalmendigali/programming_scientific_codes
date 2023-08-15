#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define VectorVector vector<vector<int>>

const int INF = 1e9;

pair<vector<int>, int> spfa(int size_matrix, vector<vector<int>> matrix, int startPoint, int endPoint)
{
    vector<int> dist(size_matrix, INF);
    vector<bool> visited(size_matrix, false);
    vector<int> pred(size_matrix, -1);
    vector<int> count(size_matrix, 0);

    dist[startPoint] = 0;
    queue<int> q;

    q.push(startPoint);
    visited[startPoint] = true;
    while(!q.empty())
    {
        int numFront = q.front();
        q.pop();
        visited[numFront] = false;
        for(int i = 0; i < size_matrix; i++)
        {
            if(matrix[numFront][i] != 0 && matrix[numFront][i] + dist[numFront] < dist[i])
            {
                dist[i] = dist[numFront] + matrix[numFront][i];

                pred[i] = numFront;

                if(!visited[i])
                {
                    q.push(i);
                    visited[i] = true;

                    count[i]++;
                    if(count[i] > size_matrix)
                    {
                        cout << "Граф имеет цикл отрицательного веса" << "\n";
                        exit(0);
                    }
                }
            }
        }
    }

    vector<int> path;
    for(int i = endPoint; i != -1; i = pred[i])
    {
        path.push_back(i);
    }

    reverse(path.begin(), path.end());

    return{path, dist[endPoint]};
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int size_matrix;
    cout << "Введите размер матрицы: ";
    cin >> size_matrix;

    vector<vector<int>> matrix(size_matrix, vector<int>(size_matrix, 0));
    cout << "Заполните матрицу: " << "\n";
    for(int i = 0; i < size_matrix; i++)
    {
        matrix[i].resize(size_matrix);
        for(int j = 0; j < size_matrix; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int startPoint, endPoint;
    cout << "Введите начальную вершину: ";
    cin >> startPoint;
    cout << "Введиете конечную вершину: ";
    cin >> endPoint;

    pair<vector<int>, int> result = spfa(size_matrix, matrix, startPoint, endPoint);

    cout << "Кратчайший путь: ";
    for(int num : result.first)
    {
        cout << num << " ";
    }

    cout << "\n";
    cout << "Расстояние: " << result.second << "\n";



    return 0;
}
