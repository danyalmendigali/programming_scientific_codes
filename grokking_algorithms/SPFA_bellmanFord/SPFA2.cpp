#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

const int INF = 1e9;  // Бесконечное значение для инициализации расстояний

// Функция SPFA для нахождения кратчайшего пути в графе от вершины start до вершины end
pair<vector<int>, int> spfa(int n, const vector<vector<int>>& matrix, int startPoint, int endPoint) {
    vector<int> dist(n, INF);      // Массив для хранения кратчайших расстояний до каждой вершины
    vector<bool> inQueue(n, false); // Массив для проверки, находится ли вершина в очереди
    vector<int> pred(n, -1);       // Массив предшественников для восстановления пути
    vector<int> count(n, 0);       // Массив для подсчета, сколько раз вершина была добавлена в очередь

    dist[startPoint] = 0;  // Расстояние от стартовой вершины до себя равно 0

    queue<int> q;
    q.push(startPoint);    // Добавляем стартовую вершину в очередь
    inQueue[startPoint] = true;  // Отмечаем, что вершина находится в очереди

    while (!q.empty()) {  // Пока очередь не пуста
        int curr = q.front();  // Берем вершину из начала очереди
        q.pop();
        inQueue[curr] = false;  // Отмечаем, что вершина больше не находится в очереди

        // Рассматриваем всех соседей текущей вершины
        for (int i = 0; i < n; ++i) {
            // Если сосед соединен ребром с текущей вершиной и через текущую вершину можно улучшить путь до соседа
            if (matrix[curr][i] != 0 && dist[curr] + matrix[curr][i] < dist[i]) {
                dist[i] = dist[curr] + matrix[curr][i];  // Обновляем путь
                pred[i] = curr;  // Запоминаем, что через curr вершину можно улучшить путь до i
                if (!inQueue[i]) {  // Если вершина i еще не в очереди
                    q.push(i);  // Добавляем в очередь
                    inQueue[i] = true;  // Отмечаем, что вершина теперь в очереди

                    count[i]++;  // Увеличиваем счетчик добавлений вершины i в очередь
                    if (count[i] > n) {  // Если вершина была добавлена в очередь более n раз
                        cout << "Граф содержит цикл отрицательного веса!\n";
                        exit(0);  // Завершаем программу
                    }
                }
            }
        }
    }

    vector<int> path;  // Массив для восстановления пути
    for (int at = endPoint; at != -1; at = pred[at]) {
        path.push_back(at);  // Добавляем вершину в путь
    }
    reverse(path.begin(), path.end());  // Разворачиваем путь, так как он был получен в обратном порядке

    return {path, dist[endPoint]};  // Возвращаем путь и длину пути
}

int main() {
    SetConsoleOutputCP(CP_UTF8);  // Устанавливаем кодировку вывода
    SetConsoleCP(CP_UTF8);  // Устанавливаем кодировку ввода

    int n, m;
    cout << "Введите количество вершин: ";
    cin >> n;

    cout << "Введите количество рёбер: ";
    cin >> m;

    vector<vector<int>> matrix(n, vector<int>(n, 0));  // Матрица смежности графа

    cout << "Введите рёбра в формате \"начальная вершина конечная вершина вес\":\n";
    for (int i = 0; i < m; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        matrix[u][v] = w;
        // Если граф неориентированный, добавьте следующую строку:
        // matrix[v][u] = w;
    }

    int startPoint, endPoint;
    cout << "Введите начальную вершину: ";
    cin >> startPoint;
    cout << "Введите конечную вершину: ";
    cin >> endPoint;

    pair<vector<int>, int> result = spfa(n, matrix, startPoint, endPoint);  // Вызываем функцию spfa

    cout << "Кратчайший путь: ";
    for (int v : result.first) {  // Выводим путь
        cout << v << " ";
    }
    cout << "\n";
    cout << "Длина пути: " << result.second << "\n";  // Выводим длину пути

    return 0;
}
