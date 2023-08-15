#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// 1 Задание
// Поиск пути между двумя вершинами: Используйте DFS для поиска пути между двумя заданными вершинами.


bool dfs(vector<vector<int>> &matrix, int startPoint, int endPoint, vector<bool> &visited, vector<int> &path)
{
    int size_matrix = matrix.size();
    path.push_back(startPoint);
    visited[startPoint] = true;
    if(startPoint == endPoint)
    {
        return true;
    }

    for(int i = 0; i < size_matrix; i++)
    {
        if(matrix[startPoint][i] == 1 && !visited[i])
        {
            if(dfs(matrix, i, endPoint, visited, path))
            {
                return true;
            }
        }
    }

    path.pop_back();
    return false;


}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int size_matrix;
    cout << "Введиет размер матрицы: ";
    cin >> size_matrix;

    vector<vector<int>> matrix(size_matrix);
    cout << "Заполниет матрицу: " << "\n";
    for(int i = 0; i < size_matrix; i++)
    {
        matrix[i].resize(size_matrix);
        for(int j = 0; j < size_matrix; j++)
        {
            cin >> matrix[i][j];
        }
    }

    vector<bool> visited(size_matrix, false);
    int startPoint, endPoint;
    cout << "Введите начальную вершину: ";
    cin >> startPoint;
    cout << "Введиет конечную вершину: ";
    cin >> endPoint;

    vector<int> path;
    if(dfs(matrix, startPoint, endPoint, visited, path))
    {
        cout << "Путь между вершинами: ";
        for(int v : path)
        {
            cout << v << " ";
        }
        cout << "\n";
    }
    else{
        cout << "Путь между вершинами не найден" << "\n";
    }



    return 0;
}
