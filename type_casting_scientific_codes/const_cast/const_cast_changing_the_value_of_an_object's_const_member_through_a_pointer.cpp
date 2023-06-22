#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Изменение значения константного члена объекта через указатель с помощью const_cast

class MyClass {
public:
    const int value;
};


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    const MyClass obj = {42};
    const MyClass* constObjPtr = &obj;

    // Изменение значения константного члена объекта через указатель с помощью const_cast
    int* mutableValuePtr = const_cast<int*>(&constObjPtr->value);
    *mutableValuePtr = 20;

    cout << "Измененное значение члена объекта: " << obj.value << endl;



   return 0;
}

