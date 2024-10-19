#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define VectorVector vector<vector<int>>

const int INF = 1e9;

<<<<<<< HEAD
void dijkstra(vector<vector<int>>& graph, int startVertex, int endVertex, vector<int>& dist, vector<int>& path) {
    int numVertices = graph.size();
    vector<bool> visited(numVertices, false);
    dist.assign(numVertices, INF);
    path.assign(numVertices, -1);
    dist[startVertex] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, startVertex});
    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        if (u == endVertex) {
            break;
        }
        if (visited[u]) {
            continue;
        }
        visited[u] = true;
        for (int v = 0; v < numVertices; ++v) {
            if (graph[u][v] != 0 && !visited[v]) {
                int newDist = dist[u] + graph[u][v];
                if (newDist < dist[v]) {
                    dist[v] = newDist;
                    path[v] = u;
                    pq.push({dist[v], v});
=======
// Функция для реализации алгоритма Дейкстры
void dijkstra(vector<vector<int>>& graph, int startVertex, int endVertex, vector<int>& dist, vector<int>& path) {
    int numVertices = graph.size();
    vector<bool> visited(numVertices, false); // Вектор для пометки посещенных вершин
    dist.assign(numVertices, INF); // Инициализируем вектор расстояний INF (бесконечностью)
    path.assign(numVertices, -1); // Инициализируем вектор путей -1 (соответствует отсутствию пути)

    dist[startVertex] = 0; // Начальное расстояние до стартовой вершины равно 0

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, startVertex}); // Помещаем стартовую вершину в очередь с расстоянием 0

    while (!pq.empty()) {
        int u = pq.top().second; // Извлекаем вершину с наименьшим расстоянием
        pq.pop();

        if (u == endVertex) {
            break; // Если достигли конечной вершины, выходим из цикла
        }

        if (visited[u]) {
            continue;
        }

        visited[u] = true; // Помечаем вершину как посещенную

        // Обновляем расстояния до соседних вершин
        for (int v = 0; v < numVertices; ++v) {
            if (graph[u][v] != 0 && !visited[v]) {
                int newDist = dist[u] + graph[u][v]; // Вычисляем новое расстояние до вершины v через текущую вершину u
                if (newDist < dist[v]) { // Если новое расстояние меньше текущего кратчайшего расстояния до вершины v
                    dist[v] = newDist; // Обновляем значение кратчайшего расстояния до вершины v
                    path[v] = u; // Запоминаем вершину u в кратчайшем пути до вершины v
                    pq.push({dist[v], v}); // Помещаем вершину v с обновленным расстоянием в приоритетную очередь
>>>>>>> 03bdd7d4fbb473b5126b0de653c6b14a55cb8216
                }
            }
        }
    }
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numVertices, numEdges;
    cout << "Введите количество вершин и ребер: ";
    cin >> numVertices >> numEdges;

    vector<vector<int>> graph(numVertices, vector<int>(numVertices, 0));

    cout << "Введите ребра и их весы в формате (u, v, weight):" << endl;
    for (int i = 0; i < numEdges; ++i) {
        int u, v, weight;
        cin >> u >> v >> weight;
        graph[u][v] = weight;
<<<<<<< HEAD
    }


    vector<int> dist, path;
    dijkstra(graph, 0, numVertices, dist, path);
    cout << "\n";

    cout << "Кратчайшее расстояние: " << dist[numVertices] << endl;

    cout << "Кратчайший путь: ";
    vector<int> shortestPath;
    for (int v = numVertices; v != -1; v = path[v]) {
=======
        graph[v][u] = weight; // Если граф неориентированный, помечаем ребро (v, u) тоже
    }

    int startVertex, endVertex;
    cout << "Введите стартовую вершину: ";
    cin >> startVertex;
    cout << "Введите конечную вершину: ";
    cin >> endVertex;

    vector<int> dist, path;
    dijkstra(graph, startVertex, endVertex, dist, path);
    cout << "\n";

    cout << "Кратчайшее расстояние: " << dist[endVertex] << endl;

    cout << "Кратчайший путь: ";
    vector<int> shortestPath;
    for (int v = endVertex; v != -1; v = path[v]) {
>>>>>>> 03bdd7d4fbb473b5126b0de653c6b14a55cb8216
        shortestPath.push_back(v);
    }
    reverse(shortestPath.begin(), shortestPath.end());
    for (int v : shortestPath) {
        cout << v << " ";
    }
    cout << endl;

    return 0;
}
