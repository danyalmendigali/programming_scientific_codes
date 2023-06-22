#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <chrono>
#include <ctime>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Пример преобразования целого числа в перечисление:

enum class Color {
    RED,
    GREEN,
    BLUE
};

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    int colorValue = 1;
    Color color = static_cast<Color>(colorValue);

    cout << "Значение перечисления Color: " << static_cast<int>(color) << endl;


   return 0;
}
