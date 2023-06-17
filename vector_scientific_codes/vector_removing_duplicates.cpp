#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Удаление дубликатов из вектора:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <int> numbers = {1, 2, 2, 3, 4, 4, 5};

    // Сортировка и удаление дубликатов
    sort(numbers.begin(), numbers.end());
    numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());


    // Вывод уникальных элементов
    for(int number : numbers) {
        cout << number << " ";
    }

    cout << endl;


   return 0;
}
