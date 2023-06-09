#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Конструктор копирования и оператор присваивания

class MyClass {
private:
    int* data;

public:
    MyClass() {
        // Конструктор по умолчанию
        data = new int(0);
    }

    // Конструктор копирования
    MyClass(const MyClass& other) {
        data = new int(*other.data);
    }

    // Оператор присваивания
    MyClass& operator=(const MyClass& other) {
        if (this != &other) {
            *data = *other.data;
        }
        return *this;
    }

    ~MyClass() {
        delete data;
    }
};


int main()
{
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);





    return 0;
}





