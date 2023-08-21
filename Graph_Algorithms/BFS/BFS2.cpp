#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Определение связности графа(BFS)

void bfs(vector<vector<int>> &matrix, int startPoint, vector<int> &component)
{
    int size_matrix = matrix.size();
    vector<bool> visited(size_matrix, false);
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
            }
        }
    }

    for(int i = 0; i < size_matrix; i++)
    {
        if(visited[i])
        {
            component.push_back(i);
        }
    }
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

    int startPoint;
    cout << "Введите начальную вершину: ";
    cin >> startPoint;


    vector<vector<int>> components;
    vector<bool> visited(size_matrix, false);

    for(int i = 0; i < size_matrix; i++)
    {
        if(!visited[i])
        {
            vector<int> component;
            bfs(matrix, i, component);
            components.push_back(component);
            for(int node : component)
            {
                visited[node] = true;
            }
        }
    }


    cout << "Компоненты связности: " << "\n";
    for(const vector<int> component : components)
    {
        for(int node : component)
        {
            cout << node << " ";
        }
        cout << "\n";
    }





    return 0;
}

