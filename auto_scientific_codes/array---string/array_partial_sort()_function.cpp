#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// partial_sort(): Эта функция частично сортирует элементы массива, так что первые k элементов будут находиться в
// отсортированном порядке, а остальные элементы могут быть в произвольном порядке.


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

    partial_sort(beginPtr, beginPtr + 3, endPtr);

    for(int i = 0; i < t; i++)
    {
        cout << "Элемент #" << i << " = " << arr[i] << endl;
    }
    cout << endl << endl;





   return 0;
}



