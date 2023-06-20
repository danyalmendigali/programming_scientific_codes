#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <sstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Получение симметрической разности двух множеств:

set <int> getSymmetricDifference(const set <int>& set1, const set <int>& set2) {
    set <int> symmetricDifference;
    set_symmetric_difference(set1.begin(), set1.end(), set2.begin(), set2.end(), std::inserter(symmetricDifference, symmetricDifference.begin()));
    return symmetricDifference;
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    set <int> set1 = {1, 2, 3, 4};
    set <int> set2 = {3, 4, 5, 6};

    set <int> symmetricDifference = getSymmetricDifference(set1, set2);

    cout << "Симметричная разница: ";
    for (int i : symmetricDifference) {
        cout << i << " ";
    }
    cout << endl;



   return 0;
}




