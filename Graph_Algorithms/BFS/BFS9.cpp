#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define VectorVector vector<vector<int>>

// BFS(нахождение кратчайших путей и расстояние от начальной вершины до всех остальных вершин которые есть в графе) [матрица]

void bfs(vector<vector<int>> &matrix, int startPoint)
{
    int size_matrix = matrix.size();
    vector<bool> visited(size_matrix, false);
    vector<int> prog(size_matrix, -1);

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

                prog[i] = numFront;
            }
        }
    }

    cout << "\n";

    for(int endPoint = 0; endPoint < size_matrix; endPoint++)
    {
        if(endPoint != startPoint)
        {
            vector<int> result;
            for(int i = endPoint; i != -1; i = prog[i])
            {
                result.push_back(i);
            }

            cout << "Кратчайший путь " << " до " << endPoint << ": ";
            for(int i = result.size() - 1; i >= 0; i--)
            {
                cout << result[i] << " ";
            }
            cout << "\n";
            cout << "Длина: " << result.size() << "\n";
        }
    }
    cout << "\n";
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);






    return 0;
}
