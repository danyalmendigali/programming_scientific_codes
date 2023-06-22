#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// find_if: Ищет первый элемент в диапазоне, удовлетворяющий заданному условию.

bool isEven(int num) {
    return num % 2 == 0;
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector<int> nums = {1, 3, 2, 5, 4};

    auto it = find_if(nums.begin(), nums.end(), isEven);

    if (it != nums.end()) {
        cout << "Первое четное число: " << *it << endl;
    } else {
        cout << "Четное число не найдено" << endl;
    }


   return 0;
}

