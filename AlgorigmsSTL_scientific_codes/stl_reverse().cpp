#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// reverse: Переворачивает элементы в диапазоне.

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <int> nums = {1, 2, 3, 4, 5};

    reverse(nums.begin(), nums.end());

    // Вывод перевернутого вектора
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;



   return 0;
}

