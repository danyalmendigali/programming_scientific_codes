#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// binary_search: Проверяет, содержится ли значение в отсортированном диапазоне.

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <int> nums = {1, 3, 5, 7, 9};

    bool found = binary_search(nums.begin(), nums.end(), 5);

    if (found) {
        cout << "Число найдено" << endl;
    } else {
        cout << "Число не найдено" << endl;
    }



   return 0;
}
