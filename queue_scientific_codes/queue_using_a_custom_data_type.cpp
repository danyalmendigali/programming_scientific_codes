#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование пользовательского типа данных в очереди:

struct Person
{
    string name;
    int age;

    Person(const string& n, int a) : name(n), age(a) {}
};


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    queue <Person> PersonQueue;

    PersonQueue.push(Person("Alice", 25));
    PersonQueue.push(Person("Bob", 30));
    PersonQueue.push(Person("Charlie", 35));


    while(!PersonQueue.empty()) {
        Person frontPerson = PersonQueue.front();
        cout << "Имя: " << frontPerson.name << ", Возраст: " << frontPerson.age << endl;
        PersonQueue.pop();
    }



   return 0;
}


