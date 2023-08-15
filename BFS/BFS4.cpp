#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>

using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define VectorVector vector<vector<int>>

// Обход графа в ширину [список ребер]

void bfs(vector<vector<int>>& adjMatrix, int startPoint) {
    int n = adjMatrix.size();
    vector<bool> visited(n, false);
    queue<int> q;
    q.push(startPoint);
    visited[startPoint] = true;

    while (!q.empty()) {
        int numFront = q.front();
        q.pop();
        cout << "Посещена вершина: " << numFront << "\n";
        for (int i = 0; i < n; i++) {
            if (adjMatrix[numFront][i] == 1 && !visited[i]) {
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n, m;
    cout << "Введите количество вершин: ";
    cin >> n;

    cout << "Введите количество ребер: ";
    cin >> m;

    vector<vector<int>> matrix(n, vector<int>(n, 0));
    cout << "Заполните ребра в форме(u, v): " << "\n";
    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        matrix[u][v] = 1;
        matrix[v][u] = 1;
    }

    int startPoint;
    cout << "Введите начальную вершину: ";
    cin >> startPoint;


    // Шаг 2: Обход графа в ширину по матрице смежности
    bfs(matrix, startPoint);


    return 0;
}
