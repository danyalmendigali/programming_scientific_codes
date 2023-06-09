#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Перегрузка операторов

class MyClass {
private:
    int value;

public:
    MyClass(int val) : value(val) {}

    MyClass operator+(const MyClass& other) {
        MyClass result(value + other.value);
        return result;
    }
};


int main()
{
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);





    return 0;
}







