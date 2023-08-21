#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Поиск кратчайшего пути(BFS)

void bfs(vector<vector<int>> &matrix, int startPoint, int endPoint)
{
    int size_matrix = matrix.size();
    vector<bool> visited(size_matrix, false);
    vector<int> path(size_matrix, -1);
    queue<int> q;

    q.push(startPoint);
    visited[startPoint] = true;

    while(!q.empty())
    {
        int numFront = q.front();
        q.pop();
        cout << "Посещена вершина: " << numFront << "\n";
        for(int i = 0; i < size_matrix; i++)
        {
            if(matrix[numFront][i] != 0 && !visited[i])
            {
                q.push(i);
                visited[i] = true;

                path[i] = numFront;
            }
        }
    }

    vector<int> pred;
    for(int i = endPoint; i != -1; i = path[i])
    {
        pred.push_back(i);
    }

    cout << "Кратчайший путь: ";
    for(int i = pred.size() - 1; i >= 0; i--)
    {
        cout  << pred[i] << " ";
    }
    cout << "\n";
    cout << "Минимальное расстояние: " << pred.size() << "\n";
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int size_matrix;
    cout << "Введите размер матрицы: ";
    cin >> size_matrix;

    vector<vector<int>> matrix(size_matrix);
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

    bfs(matrix, startPoint, endPoint);










    return 0;
}


