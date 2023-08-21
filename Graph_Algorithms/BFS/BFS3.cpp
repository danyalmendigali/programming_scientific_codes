#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define VectorVector vector<vector<int>>

// Определение уровня каждой вершины(BFS)

void bfs(VectorVector &matrix, int startPoint) {
    int size_matrix = matrix.size();
    vector<int> visited(size_matrix, 0);
    vector<int> prog(size_matrix, -1);

    queue<int> q;
    q.push(startPoint);
    visited[startPoint] = true;

    while(!q.empty()) {
        int numfront = q.front();
        q.pop();
        cout << "Посещена вершина: " << numfront << "\n";
        for(int i = 0; i < size_matrix; i++) {
            if(matrix[numfront][i] == 1 && !visited[i]) {
                q.push(i);
                visited[i] = true;
                prog[i] = numfront;
            }
        }
    }
    cout << "\n";

    for (int endPoint = 0; endPoint < size_matrix; endPoint++) {
        if (endPoint != startPoint) {
            vector<int> result;
            for (int i = endPoint; i != -1; i = prog[i]) {
                result.push_back(i);
            }

            cout << "Кратчайший путь " << " до " << endPoint << ": ";
            for(int i = result.size() - 1; i >= 0; i--) {
                cout << result[i] << " ";
            }
            cout << "\n";

            cout << "Кратчайший путь = " << result.size() << "\n" << "\n";
        }
    }

    cout << "\n" << "\n";
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

    int startPoint;
    cout << "Введите начальную точку: ";
    cin >> startPoint;

    bfs(matrix, startPoint);

    return 0;
}


