#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Класс с дружественной функцией

class MyClass {
private:
    int myAttribute;

    friend void friendFunction(MyClass& obj); // Дружественная функция

public:
    MyClass() {
        myAttribute = 0;
    }
};

void friendFunction(MyClass& obj) {
    obj.myAttribute = 42; // Дружественная функция имеет доступ к закрытым атрибутам класса
}


int main()
{
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);





    return 0;
}





