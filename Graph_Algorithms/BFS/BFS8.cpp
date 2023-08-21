#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Покраска графа(BFS)

bool bfsColoring(vector<vector<int>> &matrix, int startPoint, vector<int> &colors)
{
    int size_matrix = matrix.size();
    colors.assign(size_matrix, -1);
    queue<int> q;

    q.push(startPoint);
    colors[startPoint] = 0;

    while(!q.empty())
    {
        int numFront = q.front();
        q.pop();

        for(int i = 0; i < size_matrix; i++)
        {
            if(matrix[numFront][i] && colors[i] == -1)
            {
                colors[i] = 1 - colors[numFront];
                q.push(i);
            }
            else if(matrix[numFront][i] && colors[i] == colors[numFront])
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
    cout << "Введите резмер матрицы: ";
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

    vector<int> colors;
    if(bfsColoring(matrix, 0, colors))
    {
        cout << "Раскраска графа: " << "\n";
        for(int i = 0; i < size_matrix; i++)
        {
            cout << "Вершина " << i << ": Цвет " << colors[i] << "\n";
        }
    }
    else
    {
        cout << "Граф навозможно правильно покрасить" << "\n";
    }







    return 0;
}
