#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// accumulate(): Эта функция вычисляет сумму всех элементов массива.

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
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = accumulate(arr, arr + size, 0); // Начальная сумма = 0
    cout << endl;

    cout << "Сумма: " << sum;




   return 0;
}


