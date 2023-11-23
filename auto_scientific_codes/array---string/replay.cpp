#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int age[4];
    FOR(i, 0, 4) {
        cout << "Введите возраст: ";
        cin >> age[i];
    }


    FOR(i, 0, 4) {
        cout << "Вы ввели: " << age[i] << endl;
    }



  return 0;
}
