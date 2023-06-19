#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Создание и удаление объекта с пользовательским выделением памяти:

class MyClass {
private:
    void* operator new(size_t size) {
        cout << "Custom new operator called." << endl;
        return ::operator new(size);
    }

    void operator delete(void* ptr) {
        cout << "Custom delete operator called." << endl;
        ::operator delete(ptr);
    }

public:
    MyClass() {
        cout << "Constructor called." << endl;
    }

    ~MyClass() {
        cout << "Destructor called." << endl;
    }
};



int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    MyClass* obj = new MyClass(); // Создание объекта с пользовательским выделением памяти

    // Использование объекта

    delete obj; // Удаление объекта с пользовательским освобождением памяти




   return 0;
}
