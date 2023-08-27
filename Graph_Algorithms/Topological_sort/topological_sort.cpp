#include <iostream>
#include <vector>
#include <algorithm>
#include <windows.h>

using namespace std;

void dfs(int v, const vector<vector<int>>& graph, vector<bool>& used, vector<int>& result) {
    used[v] = true;
    for (int to : graph[v]) {
        if (!used[to])
            dfs(to, graph, used, result);
    }
    result.push_back(v);
}

vector<int> topological_sort(const vector<vector<int>>& graph) {
    int n = graph.size();
    vector<bool> used(n, false);
    vector<int> result;

    for (int i = 0; i < n; ++i) {
        if (!used[i])
            dfs(i, graph, used, result);
    }

    reverse(result.begin(), result.end());
    return result;
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    cout << "Введите количество вершин: ";
    int numVertices, numEdges;
    cin >> numVertices;

    cout << "Введите количество ребер: ";
    cin >> numEdges;

    vector<vector<int>> graph(numVertices);
    cout << "Заполните ребра в форме(vertex1, vertex2): " << "\n";
    for (int i = 0; i < numEdges; ++i) {
        int vertex1, vertex2;
        cin >> vertex1 >> vertex2;
        graph[vertex1].push_back(vertex2);
    }

    vector<int> ans = topological_sort(graph);

    cout << "Топологический порядок вершин:" << "\n";
    for (int vertex : ans) {
        cout << vertex << " ";
    }
    cout << endl;

    return 0;
}
