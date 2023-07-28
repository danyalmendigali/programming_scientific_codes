#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

// Поиск дубликатов в хеш-таблице


// Тип данных для кеша.
// Это делается для того, чтобы не писать каждый раз полное имя типа, а использовать краткое имя Cache при объявлении объектов хеш-таблицы.
#define Cache unordered_multimap<string, int>

void findDuplicates(const Cache& cache) // Принимает объект Cache и ищет дубликаты по ключам в этой хеш-таблице.
{
    unordered_set<string> keysSeen; // Будет использоваться для отслеживания уникальных ключей, которые уже были обработаны
    bool hasDuplicates = false; // Эта переменная будет использоваться для отметки, были ли найдены дубликаты в хеш-таблице.

    for (const auto& pair : cache) // Проходит через каждую пару ключ-значение в хеш-таблице cache.
    {
        const string& key = pair.first; // Для каждой пары извлекается ключ pair.first и сохраняется в переменной key.
        if (keysSeen.count(key) == 0) // Проверяет присутствует ли ключ key в keysSeen, Если ключа еще нет в keysSeen, то он добавляется в keysSeen
        {
            keysSeen.insert(key);
        }
        else // Если ключ key уже присутствует в keysSeen, это означает, что мы нашли дубликат
        {
            cout << "Найден дубликат с ключом: " << key << "\n";
            hasDuplicates = true;
        }
    }

    if (!hasDuplicates) // По завершении цикла проверяется значение hasDuplicates. Если hasDuplicates осталась false, значит, дубликаты не были найдены,
    {
        cout << "Дубликаты не найдены" << "\n";
    }
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Cache cache;

    cache.insert({"apple", 50});
    cache.insert({"orange", 70});
    cache.insert({"banana", 40});
    cache.insert({"kiwi", 30});
    cache.insert({"peach", 60});
    cache.insert({"apple", 90}); // Дубликат по ключу "apple"
    cache.insert({"grape", 80});

    findDuplicates(cache);

    return 0;
}
