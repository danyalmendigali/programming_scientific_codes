#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Поиск минимального и максимального элементов в map:


int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    map <int, string> students;

    // Вставка элементов
    students[1] = "Alice";
    students[2] = "Bob";
    students[3] = "Charlie";
    students[4] = "David";

    // Поиск минимального и максимального элементов
    auto minElement = students.begin();
    auto maxElement = students.rbegin();

    // Вывод результатов
    cout << "Min Element: Key = " << minElement->first << ", Value = " << minElement->second << endl;
    cout << "Max Element: Key = " << maxElement->first << ", Value = " << maxElement->second << endl;

  return 0;
}







