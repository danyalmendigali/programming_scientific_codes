#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// replace(): Эта функция заменяет все вхождения одного значения на другое значение в массиве.

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
    replace(arr, arr + size1, 3, 0); // значение 3 заменено на 0
    cout << endl;
    for(int i = 0; i < size1; i++)
    {
        cout << "Элемент #" << i << " = " << arr[i] << endl;
    }
    cout << endl << endl;











   return 0;
}









