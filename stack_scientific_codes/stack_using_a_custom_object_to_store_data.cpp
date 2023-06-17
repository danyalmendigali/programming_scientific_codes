#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование пользовательского объекта для хранения данных в стеке:

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

    stack <Person> personStack;

    // Добавление объектов Person в стек
    personStack.push(Person("Alice", 25));
    personStack.push(Person("Bob", 30));
    personStack.push(Person("Charlie", 35));


    // Извлечение и вывод объектов Person из стека
    while(!personStack.empty()) {
        const Person& person = personStack.top();
        cout << "Имя: " << person.name << ", Возраст: " << person.age << endl;
        personStack.pop();
    }





   return 0;
}
