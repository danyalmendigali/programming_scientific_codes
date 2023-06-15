#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование итератора для сортировки элементов в контейнере:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <int> numbers = {3, 1, 4, 2, 5};

    // Сортируем элементы в контейнере с использованием итераторов
    sort(numbers.begin(), numbers.end());

    // Выводим отсортированные элементы
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }



   return 0;
}






