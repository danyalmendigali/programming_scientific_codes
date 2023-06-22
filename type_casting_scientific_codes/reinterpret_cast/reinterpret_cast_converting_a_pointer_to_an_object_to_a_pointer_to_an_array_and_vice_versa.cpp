#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Преобразование указателя на объект в указатель на массив и обратно

class MyClass {
public:
    void print() const {
        cout << "Это объект класса MyClass." << endl;
    }
};


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    MyClass obj;
    MyClass* objPtr = &obj;

    // Преобразование указателя на объект в указатель на массив
    MyClass* arrayPtr = reinterpret_cast<MyClass*>(objPtr);

    // Использование указателя на массив
    arrayPtr[0].print();



   return 0;
}



