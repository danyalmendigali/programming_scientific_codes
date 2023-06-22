#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Работа с объектами разных типов

class Base {
public:
    virtual void print() const {
        cout << "Это объект класса Base." << endl;
    }
};


class Derived : public Base {
public:
    void print() const override {
        cout << "Это объект класса Derived." << endl;
    }
};



int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Base base;
    Derived derived;

    Base* basePtr = &base;
    Derived* derivedPtr = &derived;

    basePtr->print();
    derivedPtr->print();

    basePtr = reinterpret_cast<Base*>(derivedPtr);
    basePtr->print();


   return 0;
}

