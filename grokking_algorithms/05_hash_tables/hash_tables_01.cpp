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

    // Создание и заполнение хеш-таблицы MyHashTables
    unordered_map <string, double> MyHashTables;
    MyHashTables["orange"] = 2.12;
    MyHashTables["apple"] = 3.10;
    MyHashTables["banana"] = 1.89;
    MyHashTables["cherry"] = 2.65;

    // Поиск элемента по ключу в хеш-таблице
    string key = "orange";
    if (MyHashTables.find(key) != MyHashTables.end()) {
        cout << "Ключ найден" << "\n";
    } else {
        cout << "Ключ не найден" << "\n";
    }

    // Вывод значения элемента по ключу
    if (MyHashTables.find(key) != MyHashTables.end()) {
        auto temp = MyHashTables.find(key);
        cout << "Ключ: " << temp -> first << "\n";
        cout << "Значение: " << temp -> second << endl;
    }

    // Вставка нового элемента в хеш-таблицу
    MyHashTables.insert(make_pair("mobile", 17000));

    // Удаление элемента по ключу из хеш-таблицы
    key = "banana";
    MyHashTables.erase(key);

    // Вывод всех элементов хеш-таблицы
    for(auto it = MyHashTables.begin(); it != MyHashTables.end(); it++) {
        cout << it -> first << " " << it -> second << endl;
    }

    // Вывод размера хеш-таблицы
    cout << MyHashTables.size() << "\n";

    // Создание и заполнение хеш-таблицы MyHashTables2 с использованием массива arr
    int arr[] = {7, 1, 0, 3, 5, 0, 1, 3, 2, 5, 7, 3, 8, 9, 9};
    unordered_map<int, int> MyHashTables2;

    // Подсчет частоты повторений элементов в массиве arr с использованием хеш-таблицы MyHashTables2
    for(int i = 0; i < 15; i++) {
        int key = arr[i];
        MyHashTables2[key]++;
    }

    // Вывод всех элементов хеш-таблицы MyHashTables2
    for(auto it = MyHashTables2.begin(); it != MyHashTables2.end(); it++) {
        cout << it -> first << " " << it -> second << endl;
    }

    return 0;
}
