#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>
#include <queue>
#include <windows.h>
using namespace std;

// Определить есть ли в графе цикл отрицательного числа

const int INF = 1e9;

bool hasNegative(int size_matrix, vector<vector<int>> &matrix, int startPoint)
{
    vector<int> dist(size_matrix, INF);
    vector<bool> visited(size_matrix, false);
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
            if(matrix[numFront][i] != 0 && dist[numFront] + matrix[numFront][i] < dist[i])
            {
                dist[i] = matrix[numFront][i] + dist[numFront];
                if(!visited[i])
                {
                    q.push(i);
                    visited[i] = true;

                    count[i]++;
                    if(count[i] > size_matrix)
                    {
                        return true;
                    }
                }
            }
        }
    }

    return false;
}

int main() {
    cin.tie(0);
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



    int startPoint;
    cout << "Введите начальную вершину: ";
    cin >> startPoint;

    if(hasNegative(size_matrix, matrix, startPoint))
    {
        cout << "Граф имеет цикл отрицательного веса" ;
    }
    else
    {
        cout << "Граф не имеет цикла отрицательного веса";
    }

    cout << "\n" << "\n";












    return 0;
}
