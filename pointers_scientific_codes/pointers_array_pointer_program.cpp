#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для работы с указателями на массивы:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int arr[] = {1, 2, 3, 4, 5};
    int* ptr = arr; // Указатель на начало массива

    cout << "Элемент массива: ";
    for(int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " "; // Вывод элементов массива через указатель
    }

    cout << endl;


   return 0;
}

