#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// sort(): Эта функция сортирует элементы массива в порядке возрастания или по заданному компаратору.

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

    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + size);
    cout << endl;

    for(int i = 0; i < t; i++)
    {
        cout << "Элемент #" << i << " = " << arr[i] << endl;
    }





   return 0;
}

