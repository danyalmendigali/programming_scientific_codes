#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// adjacent_find(): Эта функция находит первую пару соседних элементов в массиве, которые равны между собой, и возвращает указатель на первый
// элемент этой пары.

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
    int* beginPtr = arr;
    int* endPtr = arr + size1;


    auto found = adjacent_find(beginPtr, endPtr);


    cout << "Первая пара соседних элементов в массиве, которые равны между собой: " << *found << endl << endl;





   return 0;
}

