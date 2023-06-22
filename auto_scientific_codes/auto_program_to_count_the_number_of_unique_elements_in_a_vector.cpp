#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для подсчета количества уникальных элементов в векторе:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector<int> numbers = {2, 5, 2, 8, 2, 9, 5, 5, 2};

    // Использование auto для определения типа контейнера uniqueElements
    set<int> uniqueElements(numbers.begin(), numbers.end());

    cout << "Количество уникальных элементов: " << uniqueElements.size() << endl;


   return 0;
}

