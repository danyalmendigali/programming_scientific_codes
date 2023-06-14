#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Удаление элементов из map:

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    map <string, int> scores;
    // Вставка элементов
    scores["Alice"] = 90;
    scores["Bob"] = 80;
    scores["Charlie"] = 95;

    // Удаление элемента
    string name = "Bob";
    int numErased = scores.erase(name);
    if (numErased > 0) {
        cout << "Successfully erased " << name << endl;
    } else {
        cout << name << " not found!" << endl;
    }





  return 0;
}



