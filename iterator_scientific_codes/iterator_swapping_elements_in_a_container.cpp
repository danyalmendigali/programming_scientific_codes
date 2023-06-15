#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование итераторов для перестановки элементов в контейнере:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector<int> numbers = {1, 2, 3, 4, 5};

    // Переставляем элементы в случайном порядке с использованием итераторов
    random_shuffle(numbers.begin(), numbers.end());

    // Выводим переставленные элементы
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }



   return 0;
}

















