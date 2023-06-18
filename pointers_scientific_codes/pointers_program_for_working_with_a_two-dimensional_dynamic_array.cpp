#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для работы с двумерным динамическим массивом с использованием указателей:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int rows, columns;
    cout << "Введите количество строк: ";
    cin >> rows;
    cout << "Введите количество столбцов: ";
    cin >> columns;

    int** matrix = new int*[rows]; // Динамическое выделение памяти для массива указателей на int

    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[columns]; // Динамическое выделение памяти для каждой строки
    }

    cout << "Введите элементы матрицы: ";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> matrix[i][j]; // Ввод элементов матрицы через указатели
        }
    }

    cout << "Элементы матрицы: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << matrix[i][j] << " "; // Вывод элементов матрицы через указатели
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++) {
        delete[] matrix[i]; // Освобождение памяти, занятой каждой строкой
    }
    delete[] matrix; // Освобождение памяти, занятой массивом указателей

   return 0;
}



