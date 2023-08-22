#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// count_if(): Эта функция подсчитывает количество элементов в массиве, которые удовлетворяют заданному условию, определенному с помощью предиката.

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
    int count1 = count_if(arr, arr + size1, [](int x) { return x % 2 == 0; });


    cout << "\nКоличество четных чисел: " << count1 << endl << endl;












   return 0;
}






