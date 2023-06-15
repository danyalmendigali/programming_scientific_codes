#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Копирование элементов из одного контейнера в другой с помощью итераторов:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <int> source = {1, 2, 3, 4, 5};
    vector <int> destination;

    // Копируем элементы из source в destination
    copy(source.begin(), source.end(), back_inserter(destination));

    // Выводим элементы в destination
    for (auto it = destination.begin(); it != destination.end(); ++it) {
        cout << *it << " ";
    }



   return 0;
}




