#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Поиск элемента в векторе и получение его индекса:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector<int> numbers = {1, 2, 3, 4, 5};
    int target = 3;

    auto it = find(numbers.begin(), numbers.end(), target);
    if(it != numbers.end()) {
        int index = distance(numbers.begin(), it);
        cout << "Элемент " << target << " найден в позиции " << index << endl;
    }
    else {
       cout << "Элемент " << target << " не найден" << endl;
    }






   return 0;
}



