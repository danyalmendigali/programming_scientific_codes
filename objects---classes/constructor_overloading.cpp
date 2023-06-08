#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Перегрузка конструктора это возможность определения нескольких конструкторов в классе с разными параметрами. Каждый перегруженный -
// - конструктор имеет уникальный список параметров

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
    }

    Point(int valueX, int valueY) // (Перегрузка конструктора) Конструктор с параметрами(Должен быть всегда в public)
    {
        x = valueX;
        y = valueY;
    }

    Point(int valueX, bool boolean) // Перегрузка конструктора
    {
        x = valueX;

        if(boolean)
        {
            y = 1;
        } else {
            y = -1;
        }

    }


    int GetY() // Геттер
    {
        return y;
    }

    void SetY(int valueY) // Сеттер
    {
        y = valueY; // Умножил значение на два
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

    Point a; // Ничего в параметрах нету значит констуктор по умолчанию вызывается
    a.Print();

    Point b(4, 14); // Это называется перегрузкой (мы здесь можем выбирать какой конструктор использовать)
    b.Print();

    Point c(22, false);
    c.Print();





   return 0;
}

