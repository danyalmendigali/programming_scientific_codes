#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Удаление дубликатов из вектора с использованием std::unordered_set:
void removeDuplicates(vector<int>& nums) {
    unordered_set <int> numSet;
    vector <int> result;

    for (int num : nums) {
        if (numSet.insert(num).second) {
            result.push_back(num);
        }
    }

    nums = result;
}



int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <int> nums = {1, 2, 3, 4, 5, 2, 4, 6, 7};

    removeDuplicates(nums);

    cout << "Уникальыне элементы: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;



   return 0;
}

