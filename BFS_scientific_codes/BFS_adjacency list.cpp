#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

/*
   Пример ввода:
       7 9
       1 2 Тоесть вершина 1 и 2 соеденены
       1 3
       2 4
       3 4
       3 7
       4 5
       5 6
       5 6
       6 7
       1 // C какой вершины начинаем обход

    1 2 3 4 7 5 6

*/

void bfs(vector<vector<int>> adj_list, int n, int x)
{
    queue<int> q;
    vector <bool> vis(n + 1, false); // Вектор для отслеживания посещенных вершин

    q.push(x); // Добавляем стартовую вершину в очередь
    vis[x] = 1; // Помечаем стартовую вершину как посещенную

    while(q.size() > 0)
    {
        int curr = q.front(); // Извлекаем вершину из очереди
        q.pop();

        cout << curr << " "; // Выводим текущую вершину

        for(auto it: adj_list[curr]) // Обходим все смежные вершины текущей вершины
        {
            if(!vis[it]) // Если смежная вершина не была посещена
            {
                q.push(it); // Добавляем ее в очередь
                vis[it] = 1; // Помечаем ее как посещенную
            }
        }
    }
}

vector<vector<int>> get_adjacency(int n, vector <int> l, vector <int> r)
{
    vector<vector<int>> adj(n + 1);
    FOR(i, 0, l.size()) // Строим список смежности на основе входных данных
    {
        adj[l[i]].push_back(r[i]); // Добавляем ребро (l[i], r[i]) в список смежности
        adj[r[i]].push_back(l[i]); // Добавляем ребро (r[i], l[i]) в список смежности (предполагая неориентированный граф)
    }
    return adj;
}

int main() {

    int n, m;
    cin >> n >> m; // Читаем количество вершин и ребер
    vector<int> l(m), r(m);
    FOR(i, 0, m)
    {
        cin >> l[i] >> r[i]; // Читаем ребро (l[i], r[i])
    }
    int x;
    cin >> x; // Читаем стартовую вершину для обхода BFS
    bfs(get_adjacency(n, l, r), n, x); // Выполняем обход BFS


    return 0;
}
