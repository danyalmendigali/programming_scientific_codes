#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h> // для getch()
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// c_str() для преобразования объекта string в строку типа const char* ---27 строка---

class Animal
{
private:
    char* name;
    int paws;
    bool tail;
    string color;

public:
    Animal() // конструктор
    {
        name = new char[256];
    }



    void Move()
    {
        int name;
        cout << this -> name << " moved" << endl; // Слово this используется для того чтобы использовать атрибут класса, а не переменную int
    }

    void PrintDescription()
    {
         cout << "name: " << this -> name << ", paws: " << this -> paws << (tail ? " have tail " : "have't tail") << ", color: " << this -> color.c_str() << endl;
    }
};


int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Animal animal_val;
    animal_val.Move();







  return 0;
}


