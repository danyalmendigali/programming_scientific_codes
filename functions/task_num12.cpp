#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Считаем сумму элементов массива

int sumOfArraytVowels(int* arr, int n);

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n;
    cout << "Введите количество чисел в масcиве: ";
    cin >> n;
    int arr[n];
    cout << "Заполнте массив" << endl;
    FOR(i, 0, n) {
        cout << "Элемен #" << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Cумма элементов массива: " <<  sumOfArraytVowels(arr, n);


  return 0;
}

int sumOfArraytVowels(int* arr, int n)
{
    int sum = 0;
    FOR(i, 0, n) {
        sum += arr[i];
    }

    return sum;

}
