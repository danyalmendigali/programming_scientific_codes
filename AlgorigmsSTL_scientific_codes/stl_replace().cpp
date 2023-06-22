#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// replace: Заменяет все вхождения значения в диапазоне на другое значение.


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    vector<int> nums = {1, 2, 1, 3, 1, 4};

    replace(nums.begin(), nums.end(), 1, 0);

    // Вывод измененного вектора
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;



   return 0;
}


