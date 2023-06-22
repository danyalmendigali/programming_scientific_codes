#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// min_element: Находит наименьший элемент в диапазоне.

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector<int> nums = {3, 1, 4, 1, 5};

    auto minIt = min_element(nums.begin(), nums.end());

    if (minIt != nums.end()) {
        cout << "Наименьший элемент: " << *minIt << endl;
    }



   return 0;
}

