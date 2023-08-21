#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define VectorVector vector<vector<int>>

// Поиск циклов в графе(BFS)

bool isCycle(vector<vector<int>> &matrix, int startPoint)
{
    int size_matrix = matrix.size();
    vector<bool> visited(size_matrix, false);
    vector<int> parent(size_matrix, -1);
    queue<int> q;

    q.push(startPoint);
    visited[startPoint] = true;

    while(!q.empty())
    {
        int numFront = q.front();
        q.pop();
        for(int i = 0; i < size_matrix; i++)
        {
            if(matrix[numFront][i] == 1)
            {
                if(!visited[i])
                {
                    q.push(i);
                    visited[i] = true;

                    parent[i] = numFront;
                }
                else if(parent[numFront] != i)
                {
                    return true;
                }
            }
        }
    }

    return false;
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
        for(int j = 0; j < size_matrix; j++)
        {
            cin >> matrix[i][j];
        }
    }

    bool cycle = isCycle(matrix, 0);

    if(cycle)
    {
        cout << "Граф имеет цикл" << "\n";
    }
    else
    {
        cout << "Граф не имеет цикла" << "\n";
    }



    return 0;
}
