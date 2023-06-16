#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование пользовательского типа данных с определенным оператором сравнения в очереди:

struct Person
{
    string name;
    int age;

    Person(const string& n, int a) : name(n), age(a) {}
};

struct ComparePerson
{
    bool operator()(const Person& p1, const Person& p2) const
    {
        return p1.age > p2.age;
    }

};


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    priority_queue<Person, vector<Person>, ComparePerson> personQueue;


    personQueue.push(Person("Alice", 25));
    personQueue.push(Person("Bob", 30   ));
    personQueue.push(Person("Charlie", 20));


    while(!personQueue.empty()) {
        Person frontPerson = personQueue.top();
        cout << "Имя: " << frontPerson.name << ", Возраст: " << frontPerson.age << endl;
        personQueue.pop();
    }


   return 0;
}



