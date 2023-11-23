#include <iostream> // Библиотека для ввода/вывода
#include <vector> // Библиотека для работы с векторами
#include <climits> // Библиотека для работы с константами INT_MAX и т. д.
#include <list> // Библиотека для работы со списками
#include <windows.h> // Windows API

using namespace std;  // Использование пространства имён std для удобства

// Алгоритм Беллмана-Форда для матрицы(Крачатчайший путь от начальной вершины до конечной)


// Структура для представления ребра графа
struct Edge {
    int source, dest, weight;
};


pair<vector<int>, int> bellman_ford(int size_matrix, const vector<Edge>& edges, int startPoint, int endPoint) {
    vector<int> distances(size_matrix, INT_MAX); // Вектор расстояний
    vector<int> predecessors(size_matrix, -1); // Вектор предшественников
    distances[startPoint] = 0; // Исходное расстояние до стартовой вершины равно 0

    // Основной цикл для релаксации рёбер
    for (int i = 0; i < size_matrix - 1; ++i) { // Выполняется V-1 итерация
        for (const Edge& edge : edges) { // Проход по всем рёбрам
            // Если расстояние до исходной вершины определено и релаксация возможна
            if (distances[edge.source] != INT_MAX && distances[edge.source] + edge.weight < distances[edge.dest]) {
                distances[edge.dest] = distances[edge.source] + edge.weight; // Обновление расстояния до конечной вершины
                predecessors[edge.dest] = edge.source; // Обновление предшественника конечной вершины
            }
        }


    // Проверка на наличие циклов отрицательного веса
    for (const Edge& edge : edges) {
        // Если обнаружена возможная релаксация после V-1 итерации, значит, есть цикл отрицательного веса
        if (distances[edge.source] != INT_MAX && distances[edge.source] + edge.weight < distances[edge.dest]) {
            cout << "Граф содержит цикл отрицательного веса.\n";
            return {{}, -1};  // Возвращаем пустой путь и -1 как индикатор ошибки
        }
    }

    // Восстановление пути
    list<int> path;
    for (int at = endPoint; at != -1; at = predecessors[at]) {
        path.push_front(at);
    }

    // Возвращаем путь и его длину
    return {{path.begin(), path.end()}, distances[endPoint]};
    }
}

int main() {
    cin.tie(); // Отвязываем cin от cout для ускорения ввода
    SetConsoleOutputCP(CP_UTF8); // Установка кодировки UTF-8 для вывода
    SetConsoleCP(CP_UTF8); // Установка кодировки UTF-8 для ввода

    int size_matrix;  // Количество вершин
    cout << "Введите количество вершин: ";
    cin >> size_matrix;

    // Считывание матрицы смежности
    vector<vector<int>> adjacency_matrix(size_matrix, vector<int>(size_matrix));
    cout << "Введите матрицу смежности:" << endl;
    for (int i = 0; i < size_matrix; ++i) {
        for (int j = 0; j < size_matrix; ++j) {
            cin >> adjacency_matrix[i][j];
        }
    }

    // Преобразование матрицы смежности в список рёбер
    vector<Edge> edges;
    for (int i = 0; i < size_matrix; ++i) {
        for (int j = 0; j < size_matrix; ++j) {
            if (adjacency_matrix[i][j] != 0) {
                edges.push_back({i, j, adjacency_matrix[i][j]});
            }
        }
    }

    // Ввод начальной и конечной вершин
    int start, end;
    cout << "Введите начальную вершину: ";
    cin >> start;
    cout << "Введите конечную вершину: ";
    cin >> end;

    // Вызов функции Беллмана-Форда
    pair<vector<int>, int> result = bellman_ford(size_matrix, edges, start, end);
    vector<int> path = result.first; // Получение пути
    int distance = result.second; // Получение длины пути

    // Вывод результата
    if (path.empty()) {
        cout << "Путь не найден." << endl;
    } else {
        cout << "Кратчайший путь от " << start << " до " << end << ": ";
        for (int v : path) {
            cout << v << " ";
        }
        cout << "\nРасстояние: " << distance << endl;
    }

    return 0; // Завершение программы
}
