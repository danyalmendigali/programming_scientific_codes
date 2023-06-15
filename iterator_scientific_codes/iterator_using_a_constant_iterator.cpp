#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Итерация с использованием константного итератора:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <int> numbers = {1, 2, 3, 4, 5};

    // Итерируемся по контейнеру с использованием константного итератора
    for (auto cit = numbers.cbegin(); cit != numbers.cend(); ++cit) {
        cout << *cit << " ";
    }



   return 0;
}


