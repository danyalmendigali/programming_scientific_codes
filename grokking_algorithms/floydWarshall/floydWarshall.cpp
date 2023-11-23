#include <iostream>
#include <vector>
#include <algorithm>
#include <windows.h>

using namespace std;

const int INF = 1e9;

// Функция для вычисления кратчайших путей между всеми парами вершин в графе
vector<vector<int>> floydWarshall(vector<vector<int>> &matrix)
{
    int size_matrix = matrix.size();
    vector<vector<int>> dp = matrix;

    // Задаем расстояния от вершины до самой себя как 0
    for(int i = 0; i < size_matrix; i++)
    {
        dp[i][i] = 0;
    }

    // Главный цикл алгоритма Флойда-Уоршелла
    for(int k = 0; k < size_matrix; k++)
    {
        for(int i = 0; i < size_matrix; i++)
        {
            for(int j = 0; j < size_matrix; j++)
            {
                // Если путь между i и k, а также между k и j существует,
                // обновляем кратчайший путь между i и j
                if(dp[i][k] != INF && dp[k][j])
                {
                    dp[i][j] = min(dp[i][j], dp[i][k] + dp[j][k]);
                }
            }
        }
    }

    // Возвращаем итоговую матрицу кратчайших расстояний
    return dp;
}

int main() {
    // Настройки консоли для корректного отображения кириллицы
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int size_matrix;
    // Запрашиваем размер матрицы смежности
    cout << "Введите размер матрицы: ";
    cin >> size_matrix;

    // Запрашиваем матрицу смежности графа
    vector<vector<int>> dp(size_matrix, vector<int>(size_matrix));
    cout << "Введите матрицу: " << "\n";
    for(int i = 0; i < size_matrix; i++)
    {
        for(int j = 0; j < size_matrix; j++)
        {
            cin >> dp[i][j];
        }
    }

    // Вызываем алгоритм Флойда-Уоршелла
    vector<vector<int>> dist = floydWarshall(dp);

    // Выводим результаты
    cout << "\n" << "\n";
    for(int i = 0; i < size_matrix; i++)
    {
        for(int j = 0; j < size_matrix; j++)
        {
            if(dist[i][j] == INF)
            {
                cout << "INF ";
            }
            else
            {
                cout << dist[i][j] << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}
