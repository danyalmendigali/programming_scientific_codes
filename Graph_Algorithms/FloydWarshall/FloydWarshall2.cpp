#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

typedef long long ll;
const int INF = 1e9;


// Функция реализующая алгоритм Флойда-Уоршелла
vector<vector<int>> floydWarsall(const vector<vector<int>> &dp)
{
    int size_dp = dp.size();  // Определение размера входной матрицы
    vector<vector<int>> dist = dp;  // Копирование матрицы для работы

    // Инициализация матрицы dist
    for(int i = 0; i < size_dp; i++)
    {
        for(int j = 0; j < size_dp; j++)
        {
            if(i != j && dist[i][j] == 0)
            {
                dist[i][j] = INF;  // Если между вершинами нет ребра, ставим бесконечность
            }
        }
    }

    // Основной цикл алгоритма Флойда-Уоршелла
    for(int k = 0; k < size_dp; k++)
    {
        for(int i = 0; i < size_dp; i++)
        {
            for(int j = 0; j < size_dp; j++)
            {
                if(dist[i][k] < INF && dist[k][j] < INF)
                {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);  // Обновление значения кратчайшего пути
                }
            }
        }
    }

    return dist;  // Возвращаем матрицу кратчайших путей
}

// Функция для проверки наличия циклов отрицательного веса
bool isNegativeCycle(const vector<vector<int>> &dist)
{
    int size_matrix = dist.size();
    for(int i = 0; i < size_matrix; i++)
    {
        if(dist[i][i] < 0) return true;  // Если на диагонали отрицательное значение, значит есть цикл отрицательного веса
    }
    return false;
}

int main() {
    cin.tie(0);  // Отключение привязки потока ввода к потоку вывода (для ускорения)
    SetConsoleOutputCP(CP_UTF8);  // Установка кодировки UTF-8 для вывода
    SetConsoleCP(CP_UTF8);       // Установка кодировки UTF-8 для ввода

    int size_dp;  // Переменная для хранения размера матрицы
    cout << "Введите размер матрицы: ";
    cin >> size_dp;  // Ввод размера матрицы

    vector<vector<int>> dp(size_dp, vector<int>(size_dp));  // Инициализация матрицы размером size_dp x size_dp
    cout << "Введите матрицу: " << "\n";
    for(int i = 0; i < size_dp; i++)
    {
        for(int j = 0; j < size_dp; j++)
        {
            cin >> dp[i][j];  // Заполнение матрицы весов рёбер
        }
    }

    vector<vector<int>> dist = floydWarsall(dp);  // Вызов алгоритма Флойда-Уоршелла

    cout << "\n" << "\n";
    if(isNegativeCycle(dist))  // Проверка наличия циклов отрицательного веса
    {
        cout << "Граф имеет цикл отрицательного веса " << "\n";
    }
    else
    {
        cout << "Граф не имеет цикл отрицательного веса " << "\n";
        cout << "Матрица кратчайших путей: " << "\n";
        for(int i = 0; i < size_dp; i++)
        {
            for(int j = 0; j < size_dp; j++)
            {
                if(dist[i][j] == INF)
                {
                    cout << "INF ";  // Выводим "INF" если путь между вершинами бесконечен
                }
                else
                {
                    cout << dist[i][j] << " ";  // Выводим длину кратчайшего пути
                }
            }
            cout << "\n";  // Переход на новую строку после вывода всех дистанций для вершины i
        }
    }

    return 0;  // Завершение программы
}
