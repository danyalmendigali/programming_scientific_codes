#include <iostream>
#include <vector>
#include <windows.h>
using namespace std;

const int NEG_INF = -1e9;  // Определяем отрицательное "бесконечное" значение для недостижимых вершин

// Функция реализует алгоритм Флойда-Уоршелла для нахождения максимальных путей
vector<vector<int>> floydWarshall(const vector<vector<int>>& dp) {
    int size_dp = dp.size();  // Получаем размер матрицы
    vector<vector<int>> dist = dp;  // Создаем копию входной матрицы

    // Инициализация матрицы расстояний
    for (int i = 0; i < size_dp; ++i) {
        for (int j = 0; j < size_dp; ++j) {
            if (i != j && dist[i][j] == 0) {
                dist[i][j] = NEG_INF;  // Если нет пути между вершинами, присваиваем значение NEG_INF
            }
        }
    }

    // Основной цикл алгоритма Флойда-Уоршелла
    for (int k = 0; k < size_dp; ++k) {
        for (int i = 0; i < size_dp; ++i) {
            for (int j = 0; j < size_dp; ++j) {
                // Если путь через вершину k возможен
                if (dist[i][k] > NEG_INF && dist[k][j] > NEG_INF) {
                    // Обновляем значение максимального пути
                    dist[i][j] = max(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }

    return dist;  // Возвращаем матрицу максимальных путей
}

int main() {
    cin.tie(0);  // Отключаем привязку cin к cout
    SetConsoleOutputCP(CP_UTF8);  // Устанавливаем кодировку вывода консоли в UTF-8
    SetConsoleCP(CP_UTF8);       // Устанавливаем кодировку ввода консоли в UTF-8

    int size_dp;  // Переменная для размера матрицы
    cout << "Введите размер матрицы: ";
    cin >> size_dp;  // Получаем размер матрицы от пользователя

    // Инициализация матрицы заданного размера
    vector<vector<int>> dp(size_dp, vector<int>(size_dp));
    cout << "Введите матрицу: " << "\n";
    for (int i = 0; i < size_dp; ++i) {
        for (int j = 0; j < size_dp; ++j) {
            cin >> dp[i][j];  // Заполняем матрицу данными от пользователя
        }
    }

    // Получаем матрицу максимальных путей с помощью алгоритма Флойда-Уоршелла
    vector<vector<int>> dist = floydWarshall(dp);
    cout << "\n" << "\n";

    // Выводим результат
    cout << "Матрица миксимальных путей: " << "\n";
    for (int i = 0; i < size_dp; ++i) {
        for (int j = 0; j < size_dp; ++j) {
            if (dist[i][j] == NEG_INF) {
                cout << "NEG_INF ";  // Если вершина недостижима, выводим NEG_INF
            } else {
                cout << dist[i][j] << " ";  // В противном случае выводим максимальное расстояние
            }
        }
        cout << "\n";  // Переход на новую строку после вывода для каждой строки матрицы
    }

    return 0;  // Завершаем выполнение программы
}
