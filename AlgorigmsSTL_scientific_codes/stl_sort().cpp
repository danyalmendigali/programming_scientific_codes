#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// sort: Сортирует элементы в диапазоне.

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector<int> nums = {5, 2, 8, 1, 4};

    sort(nums.begin(), nums.end());

    // Вывод отсортированного вектора
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;



   return 0;
}


