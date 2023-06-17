#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Копирование элементов из вектора в массив:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <int> numbers = {1, 2, 3, 4, 5};
    int size = numbers.size();
    int arr[size];

    // Копирование элементов из вектора в массив
    copy(numbers.begin(), numbers.end(), arr);

    // Вывод элементов массива
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;




   return 0;
}






