#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Проверка на уникальность элементов в массиве с использованием unordered_set:


bool hasUniqueElements(const vector <int>& nums) {
    unordered_set<int> uniqueSet(nums.begin(), nums.end());


    return uniqueSet.size() == nums.size();
}



int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector<int> nums = {1, 2, 3, 4, 5, 1};

    if (hasUniqueElements(nums)) {
        cout << "Все элементы уникальны" << endl;
    } else {
        cout << "Найдены повторяющиеся элементы" << endl;
    }



   return 0;
}


