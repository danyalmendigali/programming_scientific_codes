#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define VectorVector vector<vector<int>>

void bfs(VectorVector &matrix, int startPoint, int endPoint)
{
    int size_matrix = matrix.size();
    vector <bool> visited(size_matrix, 0);
    vector <int> prog(size_matrix, -1);

    queue <int> q;

    q.push(startPoint);
    visited[startPoint] = true;

    while(!q.empty())
    {
        int numfront = q.front();
        q.pop();
        cout << "Посещена вершина: " << numfront << "\n";
        for(int i = 0; i < size_matrix; i++)
        {
            if(matrix[numfront][i] == 1 && !visited[i])
            {
            q.push(i);
            visited[i] = true;

            prog[i] = numfront;
            }
        }
    }

    vector <int> result;
    for(int i = endPoint; i != -1; i = prog[i])
    {
        result.push_back(i);
    }


    cout << "Кратчайший путь: ";
    for(int i = result.size() - 1; i >= 0; i--)
    {
        cout << result[i] << " ";
    }

    cout << "\n";


}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int size_matrix;
    cout << "Введите размер матрицы: ";
    cin >> size_matrix;

    VectorVector myMatrix(size_matrix);

    cout << "Введите матрицу: " << "\n";
    for(int i = 0; i < size_matrix; i++)
    {
        myMatrix[i].resize(size_matrix);
        for(int j = 0; j < size_matrix; j++)
        {
            cin >> myMatrix[i][j];
        }
    }


    int endPoint, startPoint;
    cout << "Введите начальную вершину: ";
    cin >> startPoint;
    cout << "Введите конечную вершину: ";
    cin >> endPoint;

    bfs(myMatrix, startPoint, endPoint);








    return 0;
}
