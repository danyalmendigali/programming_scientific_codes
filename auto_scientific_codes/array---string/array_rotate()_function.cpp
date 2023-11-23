
#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// rotate(): Эта функция циклически сдвигает элементы массива на указанное количество позиций.


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

    int* beginPtr = arr;
    int* endPtr = arr + t;

    rotate(beginPtr, endPtr + 2, endPtr);

    for(int i = 0; i < t; i++) // Выводит мусор так как вышли из массива
    {
        cout << "Элемент #" << i << " = " << arr[i] << endl;
    }
    cout << endl << endl;





   return 0;
}




