#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Абстрактные классы и чисто виртуальные функции

class MyAbstractClass {
public:
    virtual void myMethod() = 0; // Чисто виртуальная функция
};

class MyConcreteClass : public MyAbstractClass {
public:
    void myMethod() override {
        // Реализация чисто виртуальной функции
    }
};


int main()
{
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);





    return 0;
}





