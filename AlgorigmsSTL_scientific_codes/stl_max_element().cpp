#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// max_element: Находит наибольший элемент в диапазоне.

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector<int> nums = {3, 1, 4, 1, 5};

    auto maxIt = max_element(nums.begin(), nums.end());

    if (maxIt != nums.end()) {
        cout << "Наибольший элемент: " << *maxIt << endl;
    }



   return 0;
}
