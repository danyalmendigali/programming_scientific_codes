#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Поиск повторяющихся элементов в массиве с использованием unordered_set:

vector <int> findDuplicates(const vector<int>& nums) {
    unordered_set <int> numSet;
    vector <int> duplicates;

    for (int num : nums) {
        if (numSet.count(num) > 0) {
            duplicates.push_back(num);
        } else {
            numSet.insert(num);
        }
    }

    return duplicates;
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <int> nums = {1, 2, 3, 4, 2, 5, 3};

    vector <int> duplicates = findDuplicates(nums);

    cout << "Дубликаты: ";
    for (int num : duplicates) {
        cout << num << " ";
    }
    cout << endl;


   return 0;
}

