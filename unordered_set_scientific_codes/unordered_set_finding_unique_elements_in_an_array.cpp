#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Поиск уникальных элементов в массиве с использованием unordered_set:

vector <int> findUniqueElements(const vector <int>& nums) {
    unordered_set <int> uniqueSet(nums.begin(), nums.end());
    vector <int> uniqueElements(uniqueSet.begin(), uniqueSet.end());


    return uniqueElements;
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <int> nums = {1, 2, 3, 4, 5, 2, 4, 6, 7};
    vector <int> uniqueElements = findUniqueElements(nums);

    cout << "Уникальные элементы: ";
    for (int num : uniqueElements) {
        cout << num << " ";
    }
    cout << endl;



   return 0;
}




