#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Проверка наличия дубликатов в массиве с использованием unordered_set:

bool hasDuplicates(const vector <int>& nums) {
    unordered_set<int> numSet(nums.begin(), nums.end());
    return numSet.size() < nums.size();
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <int> nums = {1, 2, 3, 4, 5, 2, 4, 6, 7};

    if (hasDuplicates(nums)) {
        cout << "Массив содержит дубликаты" << endl;
    } else {
        cout << "Массив не содержит дубликаты" << endl;
    }



   return 0;
}




