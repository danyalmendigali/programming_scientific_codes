#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Подсчет частоты появления элементов в массиве с использованием unordered_set:

unordered_map <int, int> countFrequencies(const vector<int>& nums) {
    unordered_map<int, int> freqMap;
    for (int num : nums) {
        freqMap[num]++;
    }
    return freqMap;
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <int> nums = {1, 2, 3, 4, 5, 2, 4, 6, 7};

    unordered_map <int, int> freqMap = countFrequencies(nums);

    cout << "Element Frequencies:" << endl;
    for (const auto& pair : freqMap) {
        cout << pair.first << ": " << pair.second << endl;
    }



   return 0;
}


