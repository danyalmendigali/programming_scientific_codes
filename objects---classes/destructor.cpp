#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Деструктор — это специальный метод класса, который автоматически вызывается при уничтожении объекта. Деструкторы предназначены для освобождения
// ресурсов, выделенных объектом, и выполнения других завершающих операций.

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

class MyClass
{
    int data;
public:
    MyClass(int value) // Конструткор
    {
        data = value;
        cout << "Объект " << data << " Вызвался конструткор" << endl;
    }

    ~MyClass() // Деструктор (нельзя передава ть параметры), в классе может быть только один деструктор
    {
        cout << "Объект " << data << " Вызвался деструктор" << endl;
    }

};

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    MyClass a(1);

    MyClass (2);




   return 0;
}
