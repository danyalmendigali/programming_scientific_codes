#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Удаление элементов из контейнера с помощью итератора:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    list <int> numbers = {1, 2, 3, 4, 5};

    // Удаляем все нечетные числа
    for (auto it = numbers.begin(); it != numbers.end(); ) {
        if (*it % 2 != 0) {
            it = numbers.erase(it);
        } else {
            ++it;
        }
    }

    // Выводим оставшиеся элементы
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }



   return 0;
}

