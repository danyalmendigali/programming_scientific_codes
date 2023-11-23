#include <iostream>
#include <vector>
#include <algorithm>
#include <windows.h>

using namespace std;

void dfs(int startPoint, const vector<vector<int>>& edges, vector<bool>& visited, vector<int>& result) {
    visited[startPoint] = true;
    for (int i : edges[startPoint]) {
        if (!visited[i]) {
            dfs(i, edges, visited, result);
        }
    }
    result.push_back(startPoint);
}

vector<int> topological_sort(const vector<vector<int>>& edges, int size_graph) {
    vector<bool> visited(size_graph, false);
    vector<int> result;

    for (int i = 0; i < size_graph; ++i) {
        if (!visited[i]) {
            dfs(i, edges, visited, result);
        }
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    cout << "Введите количество вершин: ";
    int numVertices, numEdges;
    cin >> numVertices;

    cout << "Введите количество рёбер: ";
    cin >> numEdges;

    vector<vector<int>> edges(numVertices); // Список смежности (список рёбер)
    cout << "Заполните рёбра в форме(vertex1, vertex2): " << endl;
    for (int i = 0; i < numEdges; ++i) {
        int vertex1, vertex2;
        cin >> vertex1 >> vertex2;
        edges[vertex1].push_back(vertex2);

    }

    vector<int> ans = topological_sort(edges, numVertices);

    cout << "Топологический порядок вершин:" << endl;
    for (int vertex : ans) {
        cout << vertex << " ";
    }
    cout << endl;

    return 0;
}
