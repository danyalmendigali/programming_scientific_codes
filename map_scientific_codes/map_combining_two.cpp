#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Объединение двух map:

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    map <string, int> scores1;
    map <string, int> scores2;

    // Вставка элементов в первый std::map
    scores1["Alice"] = 90;
    scores1["Bob"] = 80;

    // Вставка элементов во второй std::map
    scores2["Charlie"] = 95;
    scores2["David"] = 85;

    // Объединение двух std::map
    scores1.insert(scores2.begin(), scores2.end());

    // Вывод элементов после объединения
    for (const auto& pair : scores1) {
        cout << "Name: " << pair.first << ", Score: " << pair.second << endl;
    }


  return 0;
}


















