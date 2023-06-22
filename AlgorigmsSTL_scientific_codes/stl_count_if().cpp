#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// count_if: Подсчитывает количество элементов в диапазоне, удовлетворяющих заданному условию.

bool isEven(int num) {
    return num % 2 == 0;
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector<int> nums = {1, 2, 3, 4, 5};

    int count = count_if(nums.begin(), nums.end(), isEven);

    cout << "Количество четных чисел: " << count << endl;


   return 0;
}

