#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define Cache unordered_map<string, int>

void resizeHashTable(Cache& oldHashTable, size_t newSize) {
    Cache newHashTable;

    // Изменяем размер хеш-таблицы
    newHashTable.reserve(newSize);

    for (const auto& pair : oldHashTable) {
        // Перехешируем элементы и добавим их в новую хеш-таблицу
        newHashTable[pair.first] = pair.second;
    }

    // Заменяем старую хеш-таблицу на новую
    oldHashTable = move(newHashTable);
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Cache hashTable;
    hashTable["apple"] = 50;
    hashTable["orange"] = 70;
    hashTable["banana"] = 40;
    hashTable["kiwi"] = 30;
    hashTable["peach"] = 60;
    hashTable["grape"] = 80;


    int newSize = hashTable.size() * 2;

    resizeHashTable(hashTable, newSize);

    for(const auto& pair : hashTable)
    {
        cout << pair.first << ": " << pair.second << "\n";
    }


    return 0;
}

