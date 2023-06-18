#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для вычисления суммы элементов массива с использованием указателей:

int arraySum(int* arr, int size1) {
    int sum = 0;
    FOR(i, 0, size1) {
       sum += *arr; // Разыменование указателя для получения значения элемента
       arr++; // Увеличение указателя для перехода к следующему элементу массива
    }

    return sum;
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int arr[] {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = arraySum(arr, size);
    cout << "Сумма элементов массива: " << sum << endl;






   return 0;
}


