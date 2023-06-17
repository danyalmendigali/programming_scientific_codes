#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Инициализация и заполнение вектора:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    // Инициализация и заполнение вектора целыми числами
    vector <int> numbers = {1, 2, 3, 4, 5};

    // Инициализация и заполнение вектора строками
    vector <string> fruits = {"apple", "banana", "orange"};

    // Вывод элементов вектора
    for(int number : numbers) {
        cout << number << " ";
    }
    cout << endl;


    for(const string& fruit : fruits) {
        cout << fruit << " ";
    }
    cout << endl;



   return 0;
}
