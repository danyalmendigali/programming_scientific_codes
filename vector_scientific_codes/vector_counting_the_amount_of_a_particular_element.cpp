#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Подсчет количества определенного элемента в векторе:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <int> numbers = {1, 2, 3, 2, 4, 2, 5};

    int count1 = count(numbers.begin(), numbers.end(), 2);

    cout << "Количество элементов 2: " << count1 << endl;




   return 0;
}
