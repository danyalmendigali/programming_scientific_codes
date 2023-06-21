#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Поиск пары элементов, сумма которых равна заданному числу, с использованием unordered_set:

pair <int, int> findPairWithSum(const vector<int>& nums, int target) {
    unordered_set<int> numSet;
    for (int num : nums) {
        int complement = target - num;
        if (numSet.count(complement) > 0) {
            return make_pair(num, complement);
        }
        numSet.insert(num);
    }
    return make_pair(-1, -1);  // Если пара не найдена
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <int> nums = {2, 4, 6, 8, 10};
    int target = 12;

    pair <int, int> result = findPairWithSum(nums, target);

    if (result.first != -1 && result.second != -1) {
        cout << "Пара найдена: " << result.first << ", " << result.second << endl;
    } else {
        cout << "Не найдена пара с заданной суммой" << endl;
    }



   return 0;
}
