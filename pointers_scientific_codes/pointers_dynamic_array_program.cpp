#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для работы с динамическим массивом с использованием указателей:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int size;
    cout << "Введите размер массива: ";
    cin >> size;

    int* arr = new int[size]; // Динамическое выделение памяти для массива

    for(int i = 0; i < size; i++) {
        cout << "Введите элемент " << i << ": ";
        cin >> arr[i]; // Ввод элементов массива через индексацию
    }

    cout << "Введенный массив: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " "; // Вывод элементов массива через индексацию
    }
    cout << endl;


    delete[] arr; // Освобождение памяти, выделенной для массива


   return 0;
}


