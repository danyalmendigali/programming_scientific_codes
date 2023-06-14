#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование map с пользовательским типом данных:

struct Person {
    string name;
    int age;

    Person(const string& name, int age) : name(name), age(age) {}
};

bool operator<(const Person& p1, const Person& p2) {
    return p1.age < p2.age;
}



int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    map<Person, string> people;

    // Вставка элементов
    people.emplace(Person("Alice", 25), "Engineer");
    people.emplace(Person("Bob", 30), "Manager");
    people.emplace(Person("Charlie", 35), "Director");

    // Вывод значений
    for (const auto& pair : people) {
        cout << "Name: " << pair.first.name << ", Age: " << pair.first.age << ", Job: " << pair.second << endl;
    }



  return 0;
}











