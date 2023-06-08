#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

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


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);



    Human firstHuman;
    firstHuman.age = 30;
    firstHuman.name = "Ivan Ivanovich";
    firstHuman.weight = 100;

    firstHuman.Print();

    Human secondHuman; // Так как не присвоили значение экземпляру secondHuman
    secondHuman.age = 12;
    secondHuman.name = "Noname";
    secondHuman.weight = 50;

    secondHuman.Print();


    int a;
    int b;







   return 0;
}

