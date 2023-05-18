#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array

int solve() {
    std::map<int, std::string> studentMap;

    // Добавление элементов в map
    studentMap[1] = "Alice";
    studentMap[2] = "Bob";
    studentMap[3] = "Charlie";

    // Итерация по элементам map
    for (const auto& pair : studentMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Поиск элемента по ключу
    auto it = studentMap.find(2);
    if (it != studentMap.end()) {
        std::cout << "Найден элемент с ключом 2: " << it->second << std::endl;
    }

    // Удаление элемента по ключу
    studentMap.erase(3);

    // Проверка наличия элемента
    if (studentMap.count(3) == 0) {
        std::cout << "Элемент с ключом 3 не найден." << std::endl;
    }

}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    solve();





   return 0;
}
