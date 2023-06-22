#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// accumulate: Суммирует элементы в диапазоне.

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <int> nums = {1, 2, 3, 4, 5};

    int sum = accumulate(nums.begin(), nums.end(), 0);

    cout << "Сумма элементов: " << sum << endl;



   return 0;
}
