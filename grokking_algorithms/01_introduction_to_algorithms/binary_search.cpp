#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n;
    cout << "Введите количество чисел в массиве: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cout << "Введите " << i << " элемент: ";
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int key;
    cout << "Введите число которое хотите найти: ";
    cin >> key;

    int low = 0; // в переменных low и high хранятся границы той части списка, в которой выполняется поиск
    int high = n - 1;

    while(low <= high) // Пока эта часть не сократится до одного элемент...
    {
        int mid = (low + high) / 2; // ...проверяем средний элемент
        int element_array_key = arr[mid];

        if(element_array_key == key) // Значение найдено
        {
            cout << "Число найдено в позиции: " << mid << endl;
            return 0;
        }
        else if(element_array_key > key) // Много
        {
            high = mid - 1;
        }
        else // Мало
        {
            low = mid + 1;
        }
    }

    cout << "Число не найдено." << endl; // Значение не найдено





   return 0;
}


