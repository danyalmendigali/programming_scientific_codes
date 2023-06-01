#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

void solve() {
    string name;
    int age;
    double height;

    cout << "Введите ваше имя: ";
    getline(cin, name);

    cout << "Введите ваш возраст: ";
    cin >> age;

    cout << "Введите ваш рост: ";
    cin >> height;

    string message;
    message.assign("Привет, ");
    message.append(name);
    message.append("! Тебе ");
    message.append(to_string(age));
    message.append(" лет и ты ");
    message.append(to_string(height));
    message.append(" метров ростом.");

    cout << message << endl;
}



int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    solve();





   return 0;
}
