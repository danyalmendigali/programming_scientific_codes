#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <chrono>
#include <ctime>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Пример использования dynamic_cast для преобразования указателя на базовый класс в указатель на производный класс с множественным наследованием:

class Interface1 {
public:
    virtual void print() = 0;
};

class Interface2 {
public:
    virtual void display() = 0;
};


class Implementation : public Interface1, public Interface2 {
public:
    void print() override {
        cout << "Реализация интерфейса 1" << endl;
    }

    void display() override {
        cout << "Реализация интерфейса 2" << endl;
    }
};


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Interface1* interface1Ptr = new Implementation();
    Interface2* interface2Ptr = dynamic_cast<Interface2*>(interface1Ptr);

    if (interface2Ptr != nullptr) {
        interface2Ptr->display();
    }

    delete interface1Ptr;




   return 0;
}
