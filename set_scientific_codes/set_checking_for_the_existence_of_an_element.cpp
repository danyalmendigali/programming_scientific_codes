#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <sstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Подсчет уникальных элементов в set:

bool containsElement(const set <int>& set, int element) {
    return set.find(element) != set.end();
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    set <int> set = {1, 2, 3, 4, 5};

    int element = 3;

    if (containsElement(set, element)) {
        cout << "Сет содержит элемент" << endl;
    } else {
        cout << "Сет не содержит элемент" << endl;
    }


   return 0;
}
