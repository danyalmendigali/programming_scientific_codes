#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Получение подвектора из существующего вектора:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <int> numbers  = {1, 2, 3, 4, 5};

    vector <int> subVector(numbers.begin() + 2, numbers.begin() + 4);

    for(int number : subVector) {
        cout << number << " ";
    }
    cout << endl;




   return 0;
}
