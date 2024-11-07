#include <iostream> // Подключение библиотеки ввода-вывода
#include <vector>   // Подключение библиотеки для работы с векторами
#include <climits>  // Подключение библиотеки для работы с константой INT_MAX
#include <windows.h>// Подключение библиотеки для работы с Windows-specific функциями

using namespace std; // Использование пространства имен std для удобства

// Структура для хранения ребра графа
struct Edge {
    int source, dest, weight; // Исходная вершина, конечная вершина, вес ребра
};

// Функция для выполнения алгоритма Беллмана-Форда
bool bellman_ford(int V, const vector<Edge>& edges, int source, vector<int>& distances, vector<int>& predecessors) {
    distances.assign(V, INT_MAX); // Инициализация расстояний до вершин как бесконечность
    predecessors.assign(V, -1); // Инициализация предшественников вершин как "не определено"
    distances[source] = 0; // Расстояние до начальной вершины равно 0

    // Основной цикл для релаксации рёбер
    for (int i = 0; i < V - 1; ++i) { // Выполняется V-1 итерация
        for (const Edge& edge : edges) { // Проход по всем рёбрам
            // Если расстояние до исходной вершины определено и релаксация возможна
            if (distances[edge.source] != INT_MAX && distances[edge.source] + edge.weight < distances[edge.dest]) {
                distances[edge.dest] = distances[edge.source] + edge.weight; // Обновление расстояния до конечной вершины
                predecessors[edge.dest] = edge.source; // Обновление предшественника конечной вершины
            }
        }
    }

    // Проверка на наличие цикла отрицательного веса
    for (const Edge& edge : edges) {
        // Если обнаружена возможная релаксация после V-1 итерации, значит, есть цикл отрицательного веса
        if (distances[edge.source] != INT_MAX && distances[edge.source] + edge.weight < distances[edge.dest]) {
            return false;
        }
    }

    return true; // Если цикл отрицательного веса не найден, вернуть true
}

int main() {
    cin.tie(); // Отвязка потоков ввода и вывода для ускорения
    SetConsoleOutputCP(CP_UTF8); // Установка кодировки вывода UTF-8
    SetConsoleCP(CP_UTF8); // Установка кодировки ввода UTF-8

    int V, E; // Объявление переменных для числа вершин и рёбер
    cout << "Введите количество вершин: "; // Подсказка для пользователя
    cin >> V; // Ввод числа вершин
    cout << "Введите количество ребер: "; // Подсказка для пользователя
    cin >> E; // Ввод числа рёбер

    vector<Edge> edges(E); // Создание вектора рёбер

    // Подсказка для ввода рёбер
    cout << "Введите ребра и их веса (формат: исходная вершина, конечная вершина, вес): " << "\n";
    for (int i = 0; i < E; ++i) { // Цикл для ввода рёбер
        cin >> edges[i].source >> edges[i].dest >> edges[i].weight; // Ввод исходной, конечной вершины и веса ребра
    }

    int source; // Объявление начальной вершины
    cout << "Введите начальную вершину: "; // Подсказка для ввода начальной вершины
    cin >> source; // Ввод начальной вершины

    vector<int> distances, predecessors; // Объявление векторов для хранения расстояний и предшественников
    // Если алгоритм выполнен успешно, вывод кратчайших расстояний
    if (bellman_ford(V, edges, source, distances, predecessors)) {
        cout << "Кратчайшие расстояния от вершины " << source << ":\n"; // Вывод сообщения
        for (int i = 0; i < V; ++i) { // Цикл вывода расстояний до каждой вершины
            cout << "До вершины " << i << " = " << distances[i] << "\n"; // Вывод расстояния до вершины i
        }
    } else {
        // Вывод сообщения о наличии цикла отрицательного веса
        cout << "Граф содержит цикл отрицательного веса.\n";
    }

    return 0; // Завершение программы с кодом 0 (успешное выполнение)
}