#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Пример перегрузки оператора для пользовательского класса:

class MyClass {
public:
    int value;

    MyClass(int val) : value(val) {}

    MyClass operator+(const MyClass& other) {
        int result = value + other.value;
        return MyClass(result);
    }
};



int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    MyClass obj1(5);
    MyClass obj2(3);

    MyClass result = obj1 + obj2;

    cout << "Результат сложения: " << result.value << endl;


   return 0;
}



