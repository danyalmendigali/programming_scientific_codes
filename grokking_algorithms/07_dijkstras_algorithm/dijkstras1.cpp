#include <iostream>
#include <vector>
#include <limits>
#include <queue>
#include <algorithm>
#include <windows.h>
using namespace std;

const int INF = 1e9;

// Функция для реализации алгоритма Дейкстры
// graph: матрица смежности графа.
// startPoint: начальная вершина, от которой ищутся кратчайшие пути.
// endPoint: конечная вершина, до которой ищется кратчайший путь.
// dist: вектор, в котором будут храниться кратчайшие расстояния от startPoint до всех остальных вершин.
// path: вектор, в котором будет храниться информация о предыдущих вершинах на кратчайшем пути от startPoint до каждой вершины.

void dijkstra(vector<vector<int>>& graph, int startVertex, int endVertex, vector<int>& dist, vector<int>& path) {

    int numVertices = graph.size(); // size_graph - количество вершин в графе, получаемое из размера матрицы смежности.
    vector<bool> visited(numVertices, false); // Вектор для пометки посещенных вершин
    dist.assign(numVertices, INF); // Инициализируем вектор расстояний INF (бесконечностью)
    path.assign(numVertices, -1); // Инициализируем вектор путей -1 (соответствует отсутствию пути)

    dist[startVertex] = 0; // Начальное расстояние до стартовой вершины равно 0

    // Приоритетная очередь для выбора следующей вершины с наименьшим расстоянием
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, startVertex}); // Помещаем стартовую вершину в очередь с расстоянием 0

    while (!pq.empty()) {
        int u = pq.top().second; // Извлекаем вершину с наименьшим расстоянием
        pq.pop();

        if (u == endVertex) {
            break; // Если достигли конечной вершины, выходим из цикла
        }

        if (visited[u]) {
            continue; // Пропускаем вершины, которые уже были посещены
        }

        visited[u] = true; // Помечаем текущую вершину как посещенную

        // Обновляем расстояния до соседних вершин
        for (int v = 0; v < numVertices; ++v) {
            if (graph[u][v] != 0 && !visited[v]) {
                int newDist = dist[u] + graph[u][v]; // Вычисляем новое расстояние до вершины v через текущую вершину u
                if (newDist < dist[v]) { // Если новое расстояние меньше текущего кратчайшего расстояния до вершины v
                    dist[v] = newDist; // Обновляем значение кратчайшего расстояния до вершины v
                    path[v] = u; // Запоминаем вершину u в кратчайшем пути до вершины v
                    pq.push({dist[v], v}); // Помещаем вершину v с обновленным расстоянием в приоритетную очередь
                }
            }
        }
    }
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    // Ввод количества вершин графа
    int numVertices;
    cout << "Введите количество вершин: ";
    cin >> numVertices;

    // Создание графа в виде матрицы смежности
    vector<vector<int>> graph(numVertices, vector<int>(numVertices, 0));

    // Ввод матрицы смежности графа
    cout << "Введите матрицу смежности:\n";
    for (int i = 0; i < numVertices; ++i) {
        for (int j = 0; j < numVertices; ++j) {
            cin >> graph[i][j];
        }
    }

    // Ввод стартовой и конечной вершины
    int startVertex, endVertex;
    cout << "Введите стартовую вершину: ";
    cin >> startVertex;
    cout << "Введите конечную вершину: ";
    cin >> endVertex;

    vector<int> dist, path;
    // Запуск алгоритма Дейкстры
    dijkstra(graph, startVertex, endVertex, dist, path);
    cout << endl;

    // Вывод кратчайшего расстояния до конечной вершины
    cout << "Кратчайшее расстояние = " << dist[endVertex] << "\n";

    // Вывод кратчайшего пути
    cout << "Кратчайший путь: ";
    vector<int> shortestPath;
    for (int v = endVertex; v != -1; v = path[v]) {
        shortestPath.push_back(v);
    }
    reverse(shortestPath.begin(), shortestPath.end()); // Разворачиваем путь, чтобы вывести в правильном порядке
    for (int v : shortestPath) {
        cout << v << " ";
    }
    cout << endl;

    return 0;
}
