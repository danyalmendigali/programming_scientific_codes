#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// unique(): Эта функция удаляет повторяющиеся элементы из отсортированного массива и возвращает указатель на новый конец массива.

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
    sort(arr, arr + size1);
    int* newEnd = unique(arr, arr + size1);
    int newSize = distance(arr, newEnd);

    for(int i = 0; i < newSize; i++)
    {
        cout << "Уникальный элемент #" << i << " = " << arr[i] << endl;
    }
    cout << endl << endl;











   return 0;
}








