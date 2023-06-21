#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование пользовательского класса в качестве ключа unordered_map:


class Person {
public:
    Person(const string& name, int age) : name(name), age(age) {}

    bool operator==(const Person& other) const {
        return name == other.name && age == other.age;
    }

    string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

private:
    string name;
    int age;
};

struct PersonHash {
    size_t operator()(const Person& person) const {
        size_t nameHash = hash <string>{}(person.getName());
        size_t ageHash = hash <int>{}(person.getAge());
        return nameHash ^ ageHash;
    }
};


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    unordered_map <Person, string, PersonHash> map;
    Person person1("John", 25);
    Person person2("Alice", 30);
    Person person3("Bob", 35);

    map[person1] = "Engineer";
    map[person2] = "Manager";
    map[person3] = "Teacher";

    for (const auto& pair : map) {
        const Person& person = pair.first;
        const string& profession = pair.second;
        cout << "Имя: " << person.getName() << ", Возраст: " << person.getAge() << ", Профессия: " << profession << endl;
    }



   return 0;
}



