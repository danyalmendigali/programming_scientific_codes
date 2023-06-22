#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// find: Ищет значение в диапазоне.

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <int> nums = {1, 2, 3, 4, 5};

    auto it = find(nums.begin(), nums.end(), 3);

    if (it != nums.end()) {
        cout << "Число найдено на позиции: " << distance(nums.begin(), it) << endl;
    } else {
        cout << "Число не найдено" << endl;
    }



   return 0;
}
