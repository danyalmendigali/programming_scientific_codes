#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <chrono>
#include <ctime>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Пример преобразования перечисления в целочисленный тип:

enum class Color {
    RED,
    GREEN,
    BLUE
};


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Color color = Color::RED;
    int colorValue = static_cast<int>(color);

    cout << "Значение перечисления Color: " << colorValue << endl;



   return 0;
}
