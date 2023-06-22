#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// unique: Удаляет все последующие дубликаты из отсортированного диапазона.


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector<int> nums = {1, 1, 2, 2, 2, 3, 4, 4, 5};

    auto newEnd = unique(nums.begin(), nums.end());
    nums.erase(newEnd, nums.end());

    // Вывод измененного вектора
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;



   return 0;
}




