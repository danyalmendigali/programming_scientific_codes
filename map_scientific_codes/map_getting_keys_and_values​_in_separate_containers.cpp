#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Получение ключей и значений map в отдельных контейнерах:

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    map<string, int> scores;

    // Вставка элементов
    scores["Alice"] = 90;
    scores["Bob"] = 80;
    scores["Charlie"] = 95;

    // Получение ключей и значений в отдельных контейнерах
    vector <string> keys;
    vector<int> values;
    for (const auto& pair : scores) {
        keys.push_back(pair.first);
        values.push_back(pair.second);
    }

    // Вывод ключей
    cout << "Keys: ";
    for (const string& key : keys) {
        cout << key << " ";
    }
    cout << endl;

    // Вывод значений
    cout << "Values: ";
    for (int value : values) {
        cout << value << " ";
    }
    cout << endl;


  return 0;
}















