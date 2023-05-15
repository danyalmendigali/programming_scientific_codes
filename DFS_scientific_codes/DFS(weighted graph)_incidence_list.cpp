#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int INF = 1e9;

/// функция обхода в глубину
/// vertex - текущая вершина, visited - массив посещенных вершин,
/// adjList - список смежности с весами ребер
void dfs(int vertex, vector<bool>& visited, vector<vector<pair<int, int>>>& adjList) {
    /// помечаем вершину как посещенную и выводим ее на экран
    visited[vertex] = true;
    cout << vertex << " ";

    /// проходимся по всем соседям текущей вершины
    for (auto neighbor : adjList[vertex]) {
        int nextVertex = neighbor.first; /// номер соседней вершины
        int weight = neighbor.second; /// вес ребра между текущей и соседней вершинами
        if (!visited[nextVertex]) { /// если соседняя вершина не была посещена
            dfs(nextVertex, visited, adjList); /// рекурсивно вызываем обход в глубину для нее
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m; /// считываем количество вершин и ребер

    /// создаем список смежности с весами ребер
    vector<vector<pair<int, int>>> adjList(n);
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w; /// считываем начало и конец ребра, а также его вес
        adjList[u].push_back({v, w}); /// добавляем ребро в список смежности от начальной вершины
        adjList[v].push_back({u, w}); /// добавляем ребро в список смежности от конечной вершины
    }

    vector<bool> visited(n, false); /// массив посещенных вершин, изначально все вершины не посещены

    dfs(0, visited, adjList); /// запускаем обход в глубину из вершины 0

    /*
    Пример ввода:
    5 7
    0 1 2
    0 2 3
    1 3 1
    2 3 4
    2 4 5
    3 4 2
    0 4 7
    Пример вывода:
    0 1 2 3

    */



    return 0;
}
