#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование алгоритма transform для преобразования значений map:

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    map<string, int> scores;

    // Вставка элементов
    scores["Alice"] = 90;
    scores["Bob"] = 80;
    scores["Charlie"] = 95;

    // Преобразование значений с помощью std::transform
    vector<int> updatedScores;
    transform(scores.begin(), scores.end(), back_inserter(updatedScores),
                   [](const pair <string, int>& pair) { return pair.second + 10; });

    // Вывод преобразованных значений
    for (int score : updatedScores) {
        cout << "Updated Score: " << score << endl;
    }


  return 0;
}















