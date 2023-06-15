#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование итераторов для работы с пользовательскими классами:

class Person {
public:
    string name;
    int age;

    Person(const string& name, int age) : name(name), age(age) {}
};


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector<Person> people = {Person("Alice", 25), Person("Bob", 30), Person("Charlie", 35)};

    // Итерация и вывод данных пользовательских классов
    for (auto it = people.begin(); it != people.end(); ++it) {
        cout << "Name: " << it -> name << ", Age: " << it -> age << endl;
    }



   return 0;
}










