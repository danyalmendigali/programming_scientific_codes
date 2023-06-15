
#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Удаление дубликатов из контейнера с использованием итераторов:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <int> numbers = {1, 2, 2, 3, 4, 4, 5, 5, 5};

    // Удаляем дубликаты из контейнера с использованием итераторов
    numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());

    // Выводим элементы после удаления дубликатов
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }



   return 0;
}








