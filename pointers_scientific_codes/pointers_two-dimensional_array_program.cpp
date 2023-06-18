#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для работы с двумерным массивом с использованием указателей:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    const int rows = 3;
    const int cols = 4;

    int** matrix = new int*[rows]; // Динамическое выделение памяти для массива указателей

    for(int i = 0; i < rows; i++) {
        matrix[i] = new int[cols]; // Динамическое выделение памяти для каждой строки массива
    }

    int value = 1;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            matrix[i][j] = value; // Присваивание значения элементу массива через индексацию
            value++;
        }
    }


    cout << "Двухмерный массив: " << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " "; // Вывод элементов массива через индексацию
        }
        cout << endl;
    }


    for(int i = 0; i < rows; i++) {
        delete[] matrix[i]; // Освобождение памяти, занятой каждой строкой массива
    }

    delete[] matrix; // Освобождение памяти, занятой массивом указателей



   return 0;
}






