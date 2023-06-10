#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// adjacent_find(): Эта функция находит первую пару соседних элементов в массиве, которые равны между собой, и возвращает указатель на первый


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    int t;
    cout << "Введите число: ";
    cin >> t;
    int* arr = new int[t]; // Динамическое выделение памяти для массива
    for(int i = 0; i < t; i++)
    {
        cout << "Элемент #" << i << ": ";
        cin >> arr[i];
    }

    int* beginPtr = arr;
    int* endPtr = arr + t;

    int* destination = new int[t];
    int* endPtr2 = copy_if(beginPtr, endPtr, destination, [](int num) { return num % 2 != 0; });

    int size2 = endPtr2 - destination;
    cout << endl;

    // Вывод массива destination
    for(int i = 0; i < size2; i++)
    {
        cout << "Элемент #" << i << " = " << destination[i] << endl;
    }

    delete[] arr; // Освобождение памяти массива arr
    delete[] destination; // Освобождение памяти массива destination



   return 0;
}


