#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование итератора для сравнения двух контейнеров:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <int> numbers1 = {1, 2, 3, 4, 5};
    vector <int> numbers2 = {1, 2, 3, 4, 5};

    // Сравниваем два контейнера
    bool equal1 = equal(numbers1.begin(), numbers1.end(), numbers2.begin());

    if (equal1) {
        cout << "Контейнеры равны!" << endl;
    } else {
        cout << "Контейнеры не равны." << endl;
    }



   return 0;
}



