#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <chrono>
#include <ctime>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Пример использования dynamic_cast для преобразования указателя на базовый класс в указатель на интерфейсный класс:

class Interface {
public:
    virtual void print() = 0;
};

class Implementation : public Interface {
public:
    void print() override {
        cout << "Реализация интерфейса" << endl;
    }
};


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    Interface* interfacePtr = new Implementation();
    Implementation* implementationPtr = dynamic_cast<Implementation*>(interfacePtr);

    implementationPtr->print();

    delete interfacePtr;




   return 0;
}

