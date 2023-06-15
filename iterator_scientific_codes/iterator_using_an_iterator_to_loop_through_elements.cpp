#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование итератора для обратного вывода элементов контейнера:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <int> numbers = {1, 2, 3, 4, 5};

    // Обратный вывод элементов контейнера
    copy(numbers.rbegin(), numbers.rend(), ostream_iterator <int> (cout, " "));



   return 0;
}





