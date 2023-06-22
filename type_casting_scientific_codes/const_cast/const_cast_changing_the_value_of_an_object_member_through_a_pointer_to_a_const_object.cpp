#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Изменение значения члена объекта через указатель на константный объект с помощью const_cast

class MyClass {
public:
    int value;
};


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    const MyClass obj = {42};

    // Изменение значения члена объекта через указатель на константный объект с помощью const_cast
    const MyClass* constObjPtr = &obj;
    int* mutableValuePtr = const_cast<int*>(&constObjPtr->value);
    *mutableValuePtr = 20;

    cout << "Измененное значение члена объекта: " << obj.value << endl;


   return 0;
}


