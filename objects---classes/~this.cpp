#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Ключевое слово this в ООП

// this в C++ является указателем на текущий объект, на котором вызывается метод. Он используется для доступа к членам объекта
// и разрешения конфликтов имен между переменными-членами и параметрами метода.

class Human
{
public:
    int age;
    int weight;
    string name;

};

class Point
{
private:
    int x;
    int y;

public:

    Point() // Конструктор по умолчанию
    {
        x = 0;
        y = 0;
        cout << this << " constructor" << endl; // Константный указатель на адрес в памяти
    }

    Point(int valueX, int valueY) // (Перегрузка конструктора) Конструктор с параметрами(Должен быть всегда в public)
    {
        x = valueX;
        y = valueY;
        cout << this << " constructor" << endl; // Константный указатель на адрес в памяти
    }


    int GetY() // Геттер
    {
        return y;
    }

    void SetY(int y) // Сеттер
    {
        // y = valueY; (так можно делать)
        // y = y; (так нельзя делать)
        this -> y = y; // так можно делать
    }

    int GetX() // Геттер
    {
        return x;
    }

    void SetX(int valueX) // Сеттер
    {
        x = valueX;
    }



    void Print()
    {
        cout << "x = " << x << "\ny = " << y << endl << endl;
    }

};

class CoffeeGrinder
{
private:
    bool CheckVoltage() // Если вольтаж в норме
    {
        return false; // Выводит неправду
    }

public:
    void Start()
    {
        bool voltageIsNormal = CheckVoltage(); // Вольтаж в норме

        if(voltageIsNormal) {  // Если вольтаж в норме выводит 'VjuHHH!'
        cout << "VjuHHH!" << endl;
        }

        else {
            cout << "Beep Beep" << endl; // Иначе 'Beep Beep'
        }
    }


};




int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Point a;
    a.SetY(5);
    a.Print();











   return 0;
}

