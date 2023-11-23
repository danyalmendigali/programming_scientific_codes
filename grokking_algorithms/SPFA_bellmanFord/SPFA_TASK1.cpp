#include <iostream>
#include <vector>
#include <limits>
#include <queue>
#include <algorithm>
#include <windows.h>
using namespace std;

// Кратчайший путь в графе с отрицательными рёбрами:
// Дан взвешенный ориентированный граф. Необходимо найти кратчайший путь от вершины A до вершины B или определить,
// что такого пути не существует. Если путь существует, выведите его длину, иначе выведите -1.

const int INF = 1e9;

pair<vector<int>, int> spfa(int size_matrix, vector<vector<int>> &matrix, int startPoint, int endPoint)
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
                dist[i] = matrix[numFront][i] + dist[numFront];
                pred[i] = numFront;

                if(!visited[i])
                {
                    q.push(i);
                    visited[i] = true;

                    count[i]++;
                    if(count[i] > size_matrix)
                    {
                        cout << "Граф имеет цикл отрицательного веса";
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

    vector<vector<int>> matrix(size_matrix, vector<int>(size_matrix));

    cout << "Заполните матрицу: " << "\n";
    for(int i = 0; i < size_matrix; i++)
    {
        for(int j = 0; j < size_matrix; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int startPoint, endPoint;
    cout << "Введите начальную вершину: ";
    cin >> startPoint;
    cout << "Введите конечную вершину: ";
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
