#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h> // для getch()
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Список инициализации в ООП представляет собой специальный синтаксис, используемый для инициализации членов класса в момент создания объекта

class MyClass
{
private:
    int x;
    int y;
public:
    MyClass(int a, int b) : x(a), y(b) {
        // Дополнительный код конструктора (если нужно)
    }

    void PrintMyClass()
    {
        cout << "x = " << x << ", y = " << y << endl;
    }
};






int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    MyClass obj(10 ,20); // Создание объекта и передача аргументов в конструктор
    obj.PrintMyClass(); // Вывод значений членов класса






  return 0;
}

