#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование итератора для вставки элемента перед определенным значением в контейнере:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    list<int> numbers = {1, 2, 4, 5};

    // Вставляем число 3 перед числом 4
    auto it = find(numbers.begin(), numbers.end(), 4);
    if (it != numbers.end()) {
        numbers.insert(it, 3);
    }

    // Выводим элементы после вставки
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }



   return 0;
}









