#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h> // для getch()
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Ключевое слово this

class Animal
{
    char* name;
    int paws;
    bool tail;
    string color;

    void Move()
    {
        int name;
        cout << this -> name << " moved" << endl; // Слово this используется для того чтобы использовать атрибут класса, а не переменную int
    }
};


int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);








  return 0;
}

