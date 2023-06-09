#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

class MyClass
{
private:
    int x;
    int y;
    int z;
public:

    MyClass()
    {
        x = 0;
        y = 0;
        z = 0;
    }


    MyClass(int valueX, int valueY, int valueZ)
    {
        if (valueX < 0 && valueY < 0 && valueZ < 0) {
            x = 0;
            y = 0;
            z = 0;
        }
        else {
            x = valueX;
            y = valueY;
            z = valueZ;
        }
    }


    MyClass(int valueX, bool booleanY, bool booleanZ) // Перегрузка конструктора
    {
        x = valueX;

        if(booleanY)
        {
            y = 1;
        } else {
            y = -1;
        }


        if(booleanZ)
        {
            z = 1;
        }
        else {
            z = -1;
        }

    }



    void Print()
    {
        cout << "x = " << x << "\ny = " << y << "\nz = " << z << endl << endl;
    }



};

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    MyClass a;
    a.Print(); // Конструктор по умолчанию

    MyClass b(3, 5, 10); // Перегрузка конструктора
    b.Print();


    MyClass c(5, true, false); // Перегрузка конструктора
    c.Print();









   return 0;
}
