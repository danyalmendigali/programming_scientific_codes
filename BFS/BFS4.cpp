#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>

using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define VectorVector vector<vector<int>>

// Функция для перевода списка ребер в матрицу смежности
vector<vector<int>> convertToMatrix(vector<pair<int, int>>& edges, int numVertices) {
    vector<vector<int>> adjMatrix(numVertices, vector<int>(numVertices, 0));
    for (const auto& edge : edges) {
        int u = edge.first;
        int v = edge.second;
        adjMatrix[u][v] = 1;
        adjMatrix[v][u] = 1; // Если граф неориентированный, помечаем ребро (v, u) тоже
    }
    return adjMatrix;
}

// Функция для обхода графа в ширину по матрице смежности
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
    cout << "Введите количество вершин и ребер: ";
    cin >> n >> m;

    vector<pair<int, int>> edges;
    cout << "Введите ребра в форме(u, v): " << "\n";
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        edges.push_back({u, v});
    }

    // Шаг 1: Перевод списка ребер в матрицу смежности
    vector<vector<int>> adjMatrix = convertToMatrix(edges, n);

    int startPoint;
    cout << "Введите начальную вершину: ";
    cin >> startPoint;


    // Шаг 2: Обход графа в ширину по матрице смежности
    bfs(adjMatrix, startPoint);


    return 0;
}
