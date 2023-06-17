#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Изменение размера вектора и заполнение его элементами:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector<int> numbers;


    // Изменение размера вектора и заполнение его элементами
    int newSize = 5;
    int fillValue = 42;

    numbers.resize(newSize, fillValue);

    // Вывод элементов вектора
    for(int number : numbers) {
        cout << number << " ";
    }
    cout << endl;







   return 0;
}




