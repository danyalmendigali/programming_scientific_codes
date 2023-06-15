#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Поиск элемента в контейнере с помощью итератора:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <int> numbers = {1, 2, 3, 4, 5};

    // Ищем число 3 в контейнере
    auto it = find(numbers.begin(), numbers.end(), 3);

    if (it != numbers.end()) {
        cout << "Число 3 найдено!" << endl;
    } else {
        cout << "Число 3 не найдено." << endl;
    }



   return 0;
}

