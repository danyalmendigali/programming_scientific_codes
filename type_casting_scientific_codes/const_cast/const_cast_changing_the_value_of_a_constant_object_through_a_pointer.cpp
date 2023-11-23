#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Изменение значения константного объекта через указатель с помощью const_cast

class MyClass {
public:
    int value;
};


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    const MyClass obj = {42};
    const MyClass* constObjPtr = &obj;

    // Изменение значения константного объекта через указатель с помощью const_cast
    MyClass* mutablePtr = const_cast<MyClass*>(constObjPtr);
    mutablePtr->value = 20;

    cout << "Измененное значение члена объекта: " << obj.value << endl;



   return 0;
}


