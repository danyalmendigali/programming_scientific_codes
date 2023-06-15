#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Вставка элемента в контейнер с помощью итератора:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    list <int> numbers = {1, 2, 3, 4, 5};

    // Вставляем число 6 после числа 3
    auto it = find(numbers.begin(), numbers.end(), 3);
    if (it != numbers.end()) {
        numbers.insert(next(it), 6);
    }

    // Выводим элементы после вставки
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }



   return 0;
}

