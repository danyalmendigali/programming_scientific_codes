#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Преобразование указателя на объект в указатель на const объект

class MyClass {
public:
    int value;

    void print() const {
        cout << "Значение: " << value << endl;
    }
};


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    MyClass obj;
    obj.value = 42;

    MyClass* objPtr = &obj;

    // Преобразование указателя на объект в указатель на const объект
    const MyClass* constObjPtr = reinterpret_cast<const MyClass*>(objPtr);

    constObjPtr->print();



   return 0;
}

