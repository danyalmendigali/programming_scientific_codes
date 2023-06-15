#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование итераторов для работы с строками в контейнере:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <string> names = {"Alice", "Bob", "Charlie"};

    // Преобразуем все имена в верхний регистр с использованием итераторов
    for (auto it = names.begin(); it != names.end(); ++it) {
        transform(it -> begin(), it -> end(), it -> begin(), ::toupper);
    }

    // Выводим измененные имена
    for (auto it = names.begin(); it != names.end(); ++it) {
        cout << *it << " ";
    }



   return 0;
}







