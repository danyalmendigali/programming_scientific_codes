
#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// max_element() и std::min_element(): Эти функции находят максимальный и минимальный элементы в массиве соответственно и возвращают указатель на них.

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
    int*  maxElem = max_element(arr, arr + size1);
    int*  minElem = min_element(arr, arr + size1);
    cout << endl;

    cout << "Максимальный элемент: " << *maxElem << endl;
    cout << "Минимальный элемент: " << *minElem << endl;





   return 0;
}




