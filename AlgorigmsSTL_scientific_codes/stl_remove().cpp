#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// remove: Удаляет все вхождения значения из диапазона.


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector<int> nums = {1, 2, 3, 2, 4, 2};

    auto newEnd = remove(nums.begin(), nums.end(), 2);
    nums.erase(newEnd, nums.end());

    // Вывод измененного вектора
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;



   return 0;
}



