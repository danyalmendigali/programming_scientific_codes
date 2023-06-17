#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Итерация по вектору с использованием итераторов:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <int> numbers1 = {1, 2, 3, 4, 5};


    // Итерация по вектору с использованием итераторов
    for(auto it = numbers1.begin(); it != numbers1.end(); it++) {
        cout << *it << " ";
    }

    cout << endl;


   return 0;
}
