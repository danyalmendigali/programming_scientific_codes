#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для определения наиболее часто встречающегося элемента в массиве:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector<int> numbers = {2, 5, 2, 8, 2, 9, 5, 5, 2};

    // Использование auto для определения типа переменной countMap
    auto countMap = unordered_map<int, int>();

    for (auto num : numbers) {
        countMap[num]++;
    }

    auto maxCount = 0;
    auto mostFrequentElement = 0;

    for (const auto& pair : countMap) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            mostFrequentElement = pair.first;
        }
    }

    cout << "Наиболее часто встречающийся элемент: " << mostFrequentElement << endl;


   return 0;
}

