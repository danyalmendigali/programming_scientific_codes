#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Проверка на двудольность(BFS)

bool isBipartite(vector<vector<int>> &matrix, int startPoint)
{
    int size_matrix = matrix.size();;
    vector<int> color(size_matrix, -1);
    queue<int> q;

    q.push(startPoint);
    color[startPoint] = 0;

    while(!q.empty())
    {
        int numFront = q.front();
        q.pop();

        for(int i = 0; i < size_matrix; i++)
        {
            if(matrix[numFront][i] && color[i] == -1)
            {
                color[i] = 1 - color[numFront];
                q.push(i);
            }
            else if(matrix[numFront][i] && color[i] == color[numFront])
            {
                return false;
            }
        }
    }

    return true;
}

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int size_matrix;
    cout << "Введите размер мартицы: ";
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

    bool bipartite = true;

    for(int i = 0; i < size_matrix; i++)
    {
        if(isBipartite(matrix, i) == false)
        {
            bipartite = false;
        }
    }


    if(bipartite)
    {
        cout << "Граф является двудольным " << "\n";
    }
    else
    {
        cout << "Граф не является двудольным " << "\n";
    }





    return 0;
}

