#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Преобразование указателя на объект класса в указатель на другой тип

class MyClass {
public:
    void print() const {
        cout << "Это объект класса MyClass." << endl;
    }
};

class OtherClass {
public:
    void display() const {
        cout << "Это объект класса OtherClass." << endl;
    }
};



int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    MyClass myObj;
    MyClass* myObjPtr = &myObj;

    OtherClass* otherObjPtr = reinterpret_cast<OtherClass*>(myObjPtr);
    otherObjPtr->display();

   return 0;
}

