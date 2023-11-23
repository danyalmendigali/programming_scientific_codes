#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

// Тип данных для кеша.
// Это делается для того, чтобы не писать каждый раз полное имя типа, а использовать краткое имя Cache при объявлении объектов хеш-таблицы.
#define Cache unordered_map<string, int>

// Функция добавления элемента в кеш

// Cache& cache, const string& (Почему используется знак &)
// Обозначают ссылки на объекты, которые передаются в функцию. В C++, ссылки позволяют работать с оригинальными объектами,
// а не их копиями, что может быть эффективнее и предотвращает лишние копирования данных
void addToCache(Cache& cache, const string& key, int value) // Cache& cache заменяет надпись unordered_map<string, int>& cache
{
    cache[key] = value;
}


// Функция получения значения по ключу из кеша
int getFromCache(const Cache& cache, const string& key)
{
    // Возвращает итератор, указывающий на элемент с ключом key, если такой элемент найден в хеш-таблице
    // Если элемент не найден, то функция cache.find(key) вернет итератор, указывающий на элемент, следующий
    // за последним элементом в хеш-таблице (это можно проверить сравнивая его с cache.end()).
    auto it = cache.find(key);
    if(it != cache.end())
    {
        return it -> second;
    }

    // Если элемента с таким ключом нет в кеше, возвращаем значение по умолчанию (например, 0)
    return 0;
}


// Функция удаления элемента из кеша по ключу
void removeFromCache(Cache& cache, const string& key)
{
    cache.erase(key); // Удаление элемента
}


// Функция проверки, содержит ли кеш элемент с заданным ключом
bool contains(const Cache& cache, const string& key)
{
    return cache.find(key) != cache.end(); // True если элемент найден || False если элемент не найден
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Cache cache;

    // Добавляем элементы в кеш
    addToCache(cache, "apple", 50);
    addToCache(cache, "orange", 70);
    addToCache(cache, "banana", 40);

    // Поиск элементов по ключу
    cout << "Apple price: " << getFromCache(cache, "apple") << "\n";
    cout << "Orange price: " << getFromCache(cache, "orange") << "\n";
    cout << "Banana price: " << getFromCache(cache, "banana") << "\n";


    // Удаление элемента из кеша
    removeFromCache(cache, "orange");

    // Проверка наличия элемента в кеше
    cout << "Содержит яблоко: " << contains(cache, "apple") << "\n";
    cout << "Содержит апельсин: " << contains(cache, "orange") << "\n";




    return 0;
}
