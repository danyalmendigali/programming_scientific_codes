#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Добавление и удаление элементов из вектора:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <int> numbers = {1, 2, 3};

    // Добавление элемента в конец вектора
    numbers.push_back(4);


     // Удаление последнего элемента вектора
    numbers.pop_back();


    // Добавление элемента на определенную позицию
    numbers.insert(numbers.begin() + 1, 5);


    // Удаление элемента на определенной позиции
    numbers.erase(numbers.begin() + 2);


    // Вывод элементов вектора
    for(int number : numbers) {
        cout << number << " ";
    }

    cout << endl;


   return 0;
}

