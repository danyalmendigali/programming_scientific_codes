#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <sstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Поиск элемента, ближайшего к заданному в set:

int findClosestElement(const set <int>& set, int target) {
    auto it = set.lower_bound(target);

    if (it == set.begin()) {
        return *it;
    }

    if (it == set.end()) {
        --it;
        return *it;
    }

    int previous = *it;
    --it;
    int next = *it;

    return abs(target - previous) <= abs(target - next) ? previous : next;
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    set<int> set = {1, 3, 5, 7, 9};

    int target = 6;

    int closestElement = findClosestElement(set, target);

    cout << "Ближайший элемент к " << target << ": " << closestElement << endl;


   return 0;
}




