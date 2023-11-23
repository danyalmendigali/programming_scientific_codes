#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Поиск минимального числа ребер, которое нужно добавить чтобы граф стал связным(BFS)

int countConnectedComponents(vector<vector<int>> &matrix)
{
    int size_matrix = matrix.size();
    vector<bool> visited(size_matrix, false);
    queue<int> q;

    int components = 0;

    for(int start = 0; start < size_matrix; start++)
    {
        if(!visited[start])
        {
            components++;
            q.push(start);
            visited[start] = true;

            while(!q.empty())
            {
                int numFront = q.front();
                q.pop();

                for(int i = 0; i < size_matrix; i++)
                {
                    if(matrix[numFront][i] != 0 && !visited[i])
                    {
                        q.push(i);
                        visited[i] = true;
                    }
                }
            }
        }
    }

    return components;
}

int main() {
    cin.tie(0);
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

    int component = countConnectedComponents(matrix);
    cout << "Минимальное количество ребер, чтобы сделать граф связным: " << component - 1 << "\n";



    return 0;
}
