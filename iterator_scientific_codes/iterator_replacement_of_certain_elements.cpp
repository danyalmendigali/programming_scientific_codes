#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование итератора для замены определенных элементов в контейнере:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector<int> numbers = {1, 2, 3, 2, 4, 2, 5};

    // Заменяем все числа 2 на число 10
    replace(numbers.begin(), numbers.end(), 2, 10);

    // Выводим измененные элементы
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }



   return 0;
}















