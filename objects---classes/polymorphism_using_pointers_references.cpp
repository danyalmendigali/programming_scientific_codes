#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Полиморфизм с использованием указателей и ссылок на базовый класс

class MyBaseClass {
public:
    virtual void myMethod() {
        // Виртуальная функция базового класса
    }
};

class MyDerivedClass : public MyBaseClass {
public:
    void myMethod() override {
        // Переопределение виртуальной функции в производном классе
    }
};

int main() {
    MyBaseClass* obj1 = new MyBaseClass();
    MyBaseClass* obj2 = new MyDerivedClass();

    obj1->myMethod(); // Вызов метода базового класса
    obj2->myMethod(); // Вызов метода производного класса

    delete obj1;
    delete obj2;

    return 0;
}


int main()
{
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);





    return 0;
}









