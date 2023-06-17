#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Проверка, является ли вектор отсортированным:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <int> sortedNumbers = {1, 2, 3, 4, 5};
    vector <int> unsortedNumbers = {5, 2, 4, 1, 3};

    // Проверка, является ли вектор отсортированным
    bool isSorted1 = is_sorted(sortedNumbers.begin(), sortedNumbers.end());
    bool isSorted2 = is_sorted(unsortedNumbers.begin(), unsortedNumbers.end());

    cout << boolalpha;
    cout << "sortedNumbers отсортирован: " << isSorted1 << endl;
    cout << "unsortedNumbers отсортирован: " << isSorted2 << endl;




   return 0;
}
