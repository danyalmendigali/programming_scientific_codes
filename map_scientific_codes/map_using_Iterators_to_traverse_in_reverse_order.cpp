#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование итераторов для обхода map в обратном порядке:

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    map <string, int> scores;

    // Вставка элементов
    scores["Alice"] = 90;
    scores["Bob"] = 80;
    scores["Charlie"] = 95;

    // Обход std::map в обратном порядке с использованием итераторов
    map <string, int>::reverse_iterator it;
    for (it = scores.rbegin(); it != scores.rend(); ++it) {
        cout << "Name: " << it->first << ", Score: " << it->second << endl;
    }


  return 0;
}




