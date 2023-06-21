#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Поиск пар суммы в массиве с использованием unordered_set:


vector <pair<int, int>> findSumPairs(const  vector<int>& nums, int targetSum) {
    unordered_set<int> numSet;
    vector<pair<int, int>> sumPairs;

    for (int num : nums) {
        int complement = targetSum - num;
        if (numSet.count(complement) > 0) {
            sumPairs.push_back(std::make_pair(num, complement));
        }
        numSet.insert(num);
    }

    return sumPairs;
}



int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector<int> nums = {2, 4, 6, 8, 10};
    int targetSum = 14;

    vector <pair<int, int>> sumPairs = findSumPairs(nums, targetSum);

    cout << "Пары с суммой " << targetSum << ": ";
    for (const auto& pair : sumPairs) {
        cout << "(" << pair.first << ", " << pair.second << ") ";
    }
    cout << endl;



   return 0;
}


