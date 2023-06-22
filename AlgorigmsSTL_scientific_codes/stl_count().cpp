#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// count: Подсчитывает количество вхождений значения в диапазоне.

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <int> nums = {1, 2, 2, 3, 2, 4, 2};

    int count1 = count(nums.begin(), nums.end(), 2);

    cout << "Количество вхождений числа 2: " << count1 << endl;



   return 0;
}
