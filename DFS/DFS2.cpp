#include <iostream>
#include <vector>
#include <limits>
#include <queue>
#include <algorithm>
#include <windows.h>
using namespace std;

const int INF = 1e9;

void dfs(const vector<vector<int>> &matrix, int startPoint, vector<bool> &visited)
{
    int size_matrix = matrix.size();
    visited[startPoint] = true;
    cout << "Посещена вершина: " << startPoint << "\n";

    for(int i = 0; i < size_matrix; i++)
    {
        if(matrix[startPoint][i] == 1 && !visited[i])
        {
            dfs(matrix, i, visited);
        }
    }
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n, m;
    cout << "Введите количестов вершин: ";
    cin >> n;

    cout << "Введите количесво ребер: ";
    cin >> m;

    vector<vector<int>> matrix(n, vector<int>(n, 0));

    cout << "Введите ребра в форме(u, v): " << "\n";
    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        matrix[u][v] = 1;
        matrix[v][u] = 1;
    }

    int size_matrix = matrix.size();


    vector<bool> visited(size_matrix, false);

    int startPoint;
    cout << "Введите начальную вершину: ";
    cin >> startPoint;

    dfs(matrix, startPoint, visited);





    return 0;
}
