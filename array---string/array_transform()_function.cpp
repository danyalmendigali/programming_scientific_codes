#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// transform(): Эта функция применяет заданную операцию к каждому элементу массива и сохраняет результат в другом массиве.

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int t;
    cout << "Введите число: ";
    cin >> t;
    int arr[t];
    for(int i = 0; i < t; i++)
    {
        cout << "Элемент #" << i << ": ";
        cin >> arr[i];
    }

    int size1 = sizeof(arr) / sizeof(arr[0]);
    int transformed[size1];
    transform(arr, arr + size1, transformed, [](int x) { return x * 2; }); // Умножаем все значения на 2
    cout << endl;

    for(int i = 0; i < size1; i++)
    {
        cout << "Элемент #" << i << " = " << transformed[i] << endl;
    }
    cout << endl << endl;











   return 0;
}







