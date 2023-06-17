#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Получение размера и доступ к элементам вектора:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <int> numbers = {1, 2, 3, 4, 5};

    // Получение размера вектора
    cout << "Размер вектора: " << numbers.size() << endl;


    // Доступ к элементу по индексу
    cout << "Первый элемент: " << numbers[0] << endl;
    cout << "Последний элемент: " << numbers[numbers.size() - 1] << endl;


    // Изменение значения элемента
    numbers[2] = 10;


    // Вывод элементов вектора
    for(int number : numbers) {
        cout << number << " ";
    }
    cout << endl;


   return 0;
}
