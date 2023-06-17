#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Проверка, является ли вектор отсортированным:

void generateSubsets(const vector<int>& nums, vector<int>& subset, int index) {
    // Вывод текущего подмножества

    for (int number : subset) {
        cout << number << " ";
    }
    cout << endl;

    // Генерация подмножеств с добавлением следующего элемента
    for (int i = index; i < nums.size(); ++i) {
        subset.push_back(nums[i]);
        generateSubsets(nums, subset, i + 1);
        subset.pop_back();
    }
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector<int> numbers = {1, 2, 3};

    vector<int> subset;
    generateSubsets(numbers, subset, 0);




   return 0;
}

