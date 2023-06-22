#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <chrono>
#include <ctime>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Пример преобразования указателя на базовый класс в указатель на один из его производных классов:

class Base {
public:
    virtual void print() {
        cout << "Базовый класс" << endl;
    }
};

class Derived : public Base {
public:
    void print() override {
        cout << "Производный класс" << endl;
    }
};



int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Base* basePtr = new Derived();
    Derived* derivedPtr = static_cast<Derived*>(basePtr);

    derivedPtr->print();

    delete basePtr;



   return 0;
}
