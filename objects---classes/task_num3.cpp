
#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h> // для getch()
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

class Numbers
{
private:
    double m_a;
    double m_b;
    double m_c;
public:
    void setValues()
    {
        cout << "Введите первое число: ";
        cin >> m_a;

        cout << "Введите второе число: ";
        cin >> m_b;

        cout << "Введите третье число: ";
        cin >> m_c;
    }

    void print()
    {
        cout << "\nПервое число: " << static_cast<int> (m_a);
        cout << "\nВторое число: " << static_cast<int> (m_b);
        cout << "\nТретье число: " << static_cast<int> (m_c);
    }

    bool isEqual(Numbers numbers)
    {
        if (this->m_a == numbers.m_a && this->m_b == numbers.m_b && this->m_c == numbers.m_c) {
            return true;
        }
        else {
            return false;
        }
    }


};

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Numbers numbers1, numbers2;

    numbers1.setValues();
    cout << "\n";

    numbers2.setValues();
    cout << "\n";



    numbers1.print();
    cout << "\n";
    numbers2.print();
    cout << "\n";

    bool result = numbers1.isEqual(numbers2);


    if(!(result)) {
      cout << "\nСодержимое не равно! ";
    }
    else {
      cout << "\nСодержимое равно! ";
    }




  return 0;
}

