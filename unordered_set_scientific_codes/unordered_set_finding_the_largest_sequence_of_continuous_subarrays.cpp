#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Поиск наибольшей последовательности непрерывных подмассивов с использованием unordered_set:


int longestConsecutiveSequence(const vector <int>& nums) {
    unordered_set<int> numSet(nums.begin(), nums.end());
    int maxLength = 0;

    for (int num : numSet) {
        // Проверить, является ли число началом последовательности
        if (numSet.count(num - 1) == 0) {
            int currentNum = num;
            int currentLength = 1;

            // Найдите длину последовательной последовательности, начинающейся с num
            while (numSet.count(currentNum + 1) > 0) {
                currentNum++;
                currentLength++;
            }

            maxLength = max(maxLength, currentLength);
        }
    }

    return maxLength;
}



int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector<int> nums = {100, 4, 200, 1, 3, 2};

    int longestSeqLength = longestConsecutiveSequence(nums);

    cout << "Самая длинная последовательная длина последовательности: " << longestSeqLength << endl;


   return 0;
}

