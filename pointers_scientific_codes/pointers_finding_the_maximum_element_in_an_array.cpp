#include <bits/stdc++.h>
#include <windows.h>
#include <functional>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Переворот строки с использованием указателей:

int findMax(const int* arr, int size) {
    if (arr == nullptr || size == 0)
        return -1; // Ошибка, некорректные данные

    const int* max = arr;

    for (int i = 1; i < size; ++i) {
        if (*(arr + i) > *max) {
            max = arr + i;
        }
    }

    return *max;
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int arr[] = {5, 2, 9, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    int max = findMax(arr, size);
    cout << "Максимальный элемент: " << max << endl; // Выводит "Максимальный элемент: 9"




   return 0;
}






