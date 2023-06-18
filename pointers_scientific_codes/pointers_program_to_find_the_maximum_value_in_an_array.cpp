#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для поиска максимального значения в массиве с использованием указателей:

int findMax(int* arr, int size) {
    int max = *arr; // Первый элемент массива
    for(int i = 1; i < size; i++) {
        if(*(arr + i) > max) { // Сравнение значения элемента с максимумом
            max = *(arr + i);
        }
    }

    return max;
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int arr[] {5, 8, 3, 9, 2};
    int size = sizeof(arr) / sizeof(arr[0]);


    int max = findMax(arr, size);
    cout << "Максимальное значение: " << max << endl;



   return 0;
}

