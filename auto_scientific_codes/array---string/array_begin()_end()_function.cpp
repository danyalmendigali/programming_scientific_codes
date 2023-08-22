#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// begin() и end(): Эти функции возвращают указатели на начало и конец массива соответственно.

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

    int* beginPtr = arr;
    int* endPtr  = arr + t;


    cout << "Указатель на начало массива: " << static_cast<void*>(&beginPtr) << endl;
    cout << "Указатель на конец массива: " << static_cast<void*>(&endPtr) << endl;

    delete[] arr;



   return 0;
}

