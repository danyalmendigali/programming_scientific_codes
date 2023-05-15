#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array

const int INF = 1e9;

// Функция для бинарного поиска
void binary_search() {

    cout << "Введите количество чисел в векторе: ";
    int n;
    cin >> n;
    vector <int> binary_numbers; // создали вектор
    for(int i = 0; i < n; i++) {
        int b;
        cout << "Введите " <<  i << " элемент: ";
        cin >> b; // считываем элементы вектора
        binary_numbers.push_back(b);
    }

    sort(binary_numbers.begin(), binary_numbers.end()); // сортируем с помощью функции sort (быстрая сортировка)
    cout << "Введите число которое хотите найти: ";
    int key; // создали переменную в которой будет находиться число которое будем искать
    cin >> key; // считываем число которое ищем

    bool flag = false;
    int l = 0; // левая граница
    int r = binary_numbers.size() - 1; // правая граница
    int mid;

    while((l <= r) && (flag != true)) {
        mid = (l + r) / 2; // считываем срединный индекс отрезка [l,r]

        if(binary_numbers[mid] == key) { //проверяем ключ со серединным элементом
            flag = true;
        }
        if(binary_numbers[mid] > key) { // проверяем, какую часть нужно отбросить
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }


    if(flag) {
        cout << "Индекс элемента " << key << " в массиве равен: " << mid;
    }
    else {
        cout << "Извините, но такого элемента в массиве нет";
    }

}

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    binary_search();







    return 0;
}
