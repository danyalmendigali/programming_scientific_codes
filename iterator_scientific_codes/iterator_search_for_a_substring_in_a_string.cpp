#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование итераторов для поиска подстроки в строке:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string text = "Hello, world!";
    string pattern = "world";

    // Поиск подстроки в строке с использованием итераторов
    auto it = search(text.begin(), text.end(), pattern.begin(), pattern.end());
    if (it != text.end()) {
        cout << "Подстрока найдена в позиции: " << distance(text.begin(), it) << endl;
    } else {
        cout << "Подстрока не найдена." << endl;
    }



   return 0;
}











