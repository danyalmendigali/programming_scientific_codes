#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    unordered_map <string, long long int> MyHashTables;
    MyHashTables["Danya"] = 11002001020;
    MyHashTables["Vasya"] = 22003002030;
    MyHashTables["Dima"] = 33004003040;

    string nameToFind = "Danya";
    auto it = MyHashTables.find(nameToFind);


    // Это условное выражение проверяет, был ли элемент найден в хеш-таблице. Если элемент найден,
    // итератор it указывает на этот элемент, и условие будет истинным Если элемент не найден, итератор it будет равен MyHashTables.end(), и условие будет ложным.
    if(it != MyHashTables.end())
    {
        cout << "Имя: " << it -> first << "\n";
        cout << "Номер телефона: +" << it -> second << "\n";
    }
    else
    {
        cout << "Имя не найден\n";
    }








    return 0;
}
