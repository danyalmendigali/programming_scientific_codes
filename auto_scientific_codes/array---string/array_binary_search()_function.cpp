
#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// binary_search(): Эта функция выполняет бинарный поиск заданного значения в отсортированном массиве и возвращает true,
// если значение найдено, и false в противном случае.


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

    sort(beginPtr, endPtr);

    bool found = binary_search(beginPtr, endPtr, 3);

    if(found)
    {
        cout << "True!" << endl;
    }
    else
    {
        cout << "False!" << endl;
    }






   return 0;
}






