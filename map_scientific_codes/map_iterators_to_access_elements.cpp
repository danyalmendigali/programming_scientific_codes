#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование итераторов для доступа к элементам map:


int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    map<string, int> scores;

    // Вставка элементов
    scores["Alice"] = 90;
    scores["Bob"] = 80;
    scores["Charlie"] = 95;

    // Использование итераторов для доступа к элементам
    map <string, int>::iterator it = scores.find("Bob");
    if (it != scores.end()) {
        cout << "Score of Bob: " << it -> second << endl;
    } else {
        cout << "Bob not found!" << endl;
    }



  return 0;
}






