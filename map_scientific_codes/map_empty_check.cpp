#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Проверка пустоты map:


int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    map <string, int> scores;

    // Проверка пустоты
    if (scores.empty()) {
        cout << "The map is empty" << endl;
    } else {
        cout << "The map is not empty" << endl;
    }

  return 0;
}

