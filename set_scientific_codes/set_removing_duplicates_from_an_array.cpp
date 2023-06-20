#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <sstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Удаление дубликатов из массива:

vector<int> removeDuplicates(const vector<int>& vec) {
    set <int> uniqueElements(vec.begin(), vec.end());
    vector <int> result(uniqueElements.begin(), uniqueElements.end());


    return result;
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <int> vec = {1, 2, 3, 2, 4, 5};

    vector <int> uniqueVec = removeDuplicates(vec);

    cout << "Исходный вектор: ";
    for (int i : vec) {
        cout << i << " ";
    }
    cout <<endl;

    cout << "Вектор без дубликатов: ";
    for (int i : uniqueVec) {
        cout << i << " ";
    }
    cout << endl;



   return 0;
}


