#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для динамического выделения памяти с использованием указателей:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int size1;
    cout << "Введите размер массива: ";
    cin >> size1;

    int* arr = new int[size1]; // Динамическое выделение памяти для массива

    for(int i = 0; i < size1; i++) {
        cout << "Введите элемент " << i << ": ";
        cin >> *(arr + i); // Ввод элементов массива через указатель
    }

    cout << "Введенный массив: ";
    for(int i = 0; i < size1; i++) {
        cout << *(arr + i) << " "; // Вывод элементов массива через указатель
    }

    cout << endl;

    delete[] arr; // Освобождение памяти, выделенной для массива




   return 0;
}



