#include <iostream>
#include <vector>
#include <windows.h>
using namespace std;

const int INF = 1e9; // Константа для представления бесконечности (в данном случае большого числа)

// Алгоритм Флойда-Уоршелла
vector<vector<int>> floydWarshall(const vector<vector<int>>& dp) {
    int n = dp.size(); // Определение размера матрицы (количество вершин)
    vector<vector<int>> dist = dp; // Создание рабочей матрицы дистанций

    // Инициализация
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i != j && dist[i][j] == 0) {
                dist[i][j] = INF; // Если вершины разные и не соединены, присваиваем им бесконечность
            }
        }
    }

    // Алгоритм Флойда-Уоршелла
    for (int k = 0; k < n; ++k) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                // Проверка на возможность укорочения пути через вершину k
                if (dist[i][k] < INF && dist[k][j] < INF) {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }

    return dist; // Возвращаем результирующую матрицу дистанций
}

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    int size_dp;
    cout << "Введите размер матрицы: ";
    cin >> size_dp; // Вводим число вершин

    vector<vector<int>> matrix(size_dp, vector<int>(size_dp)); // Инициализация матрицы смежности размером n x n
    // Чтение матрицы смежности
    cout << "Введите матрицу: " << "\n";
    for (int i = 0; i < size_dp; ++i) {
        for (int j = 0; j < size_dp; ++j) {
            cin >> matrix[i][j]; // Заполнение матрицы смежности
        }
    }

    vector<vector<int>> dist = floydWarshall(matrix); // Вызов алгоритма Флойда-Уоршелла

    // Вывод результата
    cout << "\n";
    cout << "Матрица кратчайшийх путей: " << "\n";
    for (int i = 0; i < size_dp; ++i) {
        for (int j = 0; j < size_dp; ++j) {
            if (dist[i][j] == INF) {
                cout << "INF ";  // Выводим INF, если дистанция между вершинами бесконечна
            } else {
                cout << dist[i][j] << " "; // Иначе выводим расстояние
            }
        }
        cout << "\n"; // Переход на новую строку после вывода всех дистанций для вершины i
    }

    return 0; // Завершение программы
}
