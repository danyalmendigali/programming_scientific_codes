#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Итерация по поддиапазону элементов контейнера с использованием итераторов:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <int> numbers = {1, 2, 3, 4, 5};

    // Итерация по поддиапазону элементов с использованием итераторов
    auto start = numbers.begin() + 1;
    auto end = numbers.end() - 1;
    for (auto it = start; it != end; ++it) {
        cout << *it << " ";
    }



   return 0;
}











