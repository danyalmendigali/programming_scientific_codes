#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

// Поиск в глубину (depth-first search – DFS

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

const int N = 100; // Максимальное количество вершин в графе

vector<vector<int>> adj; // Список смежности графа
bool visited[N]; // Массив посещенных вершин

void dfs(int s) {
    if (visited[s]) return;
    visited[s] = true;

    // Обработка вершины s
    cout << "Вы посетили вершину номер - " << s << std::endl;

    for (auto u : adj[s]) {
        dfs(u);
    }
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    // Инициализация графа и массива visited
    int n; // Количество вершин
    int m; // Количество ребер
    cin >> n >> m;

    adj.resize(n);
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // Для неориентированного графа
    }

    for (int i = 0; i < n; ++i) {
        visited[i] = false;
    }

    // Запуск поиска в глубину из каждой вершины
    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            dfs(i);
        }
    }

    return 0;
}

/*




      Ввода:
        6 7
        0 1
        0 2
        1 3
        1 4
        2 4
        3 5
        4 5

     Вывод:

    Обработка вершины: 0
    Обработка вершины: 1
    Обработка вершины: 3
    Обработка вершины: 5
    Обработка вершины: 2
    Обработка вершины: 4

*/
