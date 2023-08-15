#include <iostream>
#include <vector>
#include <limits>
#include <queue>
#include <windows.h>
#include <algorithm>
using namespace std;

#define VectorVector vector<vector<int>>

// Нахождение цикла(список ребер)

const int INF = 1e9;


bool isBfsMatrix(vector<vector<int>> matrix, int startPoint)
{
    int size_matrix = matrix.size();
    vector<bool> visited(size_matrix, 0);
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
    cin.tie(nullptr);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n, m;
    cout << "Введите количество вершин: ";
    cin >> n;

    cout << "Введиет количество ребер: ";
    cin >> m;

    vector<vector<int>> matrix(n, vector<int>(n, 0));
    cout << "Заполните ребра в форме(u, v): " << "\n";
    for(int i = 0; i < m; i++)s
    {
        int u, v;
        cin >> u >> v;
        matrix[u][v] = 1;
    }

    bool isCycle = isBfsMatrix(matrix, 0);
    if(isCycle)
    {
        cout << "Граф имеет цикл" << "\n";
    }
    else
    {
        cout << "Граф не имеет цикла" << "\n";
    }





    return 0;
}
