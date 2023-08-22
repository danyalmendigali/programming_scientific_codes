
#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// find(): Эта функция ищет первое вхождение заданного значения в массиве и возвращает указатель на него.

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
    int* found = find(arr, arr + size1, 3); // found указывает на элемент 3 в массиве arr
    cout << "found указывает на элемент 3 в массиве arr: " << *found << endl;





   return 0;
}



