#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Перегрузка оператора равенства == и не равно !=. Перегрузка логических операторов сравнения.

class Human
{

public:
    int age;
    int weight;
    string name;

    void Print()
    {
        cout << "Имя " << name << "\nВес " << weight << "\nВозраст " << age << endl << endl;
    }

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

    bool operator ==(const Point & other) // Перегрузка оператора == (Всегда должен быть константным)
    {
       return this -> x == other.x && this -> y == other.y;
    }

    bool operator !=(const Point & other) // Перегрузка оператора != (Всегда должен быть константным)   (Просто поменять знак = на !=)
    {
       return !(this -> x == other.x && this -> y == other.y); // Ставим перед скобкой знак инвертировать !
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
class MyClass
{
public:
    int *data;


    MyClass(int size) // Конструткор
    {
        this -> Size = size;
        this -> data = new int[size];

        FOR(i, 0, size)
        {
            data[i] = i;
        }
        cout << "Вызвался конструткор " << this << endl; // Указатель
    };

    MyClass(const MyClass &other) // Копирование объектов
    {

        this -> Size = other.Size;

        this -> data = new int[other.Size];
        FOR(i, 0, other.Size)
        {
            this -> data[i] = other.data[i];
        }

        cout << "Вызвался конструткор копирования " << this << endl; // Указатель
    }


    ~MyClass() // Деструктор (нельзя передава ть параметры), в классе может быть только один деструктор
    {
        cout << "Вызвался деструктор " << this << endl; // Указатель
        delete[] data;
    }
private:
    int Size;
};





int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Point a(5, 1);
    Point b(77, 12);


    bool result = a != b;








   return 0;
}


