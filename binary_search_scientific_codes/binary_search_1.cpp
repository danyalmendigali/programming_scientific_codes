#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array

const int INF = 1e9;

// Функция для бинарного поиска
int binary_search(vector<int>& arr, int target) {
    int left = 0; // Левая граница
    int right = arr.size() - 1; // Правая граница

    // Пока левая граница не пересекла правую
    while (left <= right) {
        int mid = (left + right) / 2; // Средний индекс
        if (arr[mid] == target) { // Если элемент найден
            return mid; // Возвращаем его индекс
        }
        else if (arr[mid] < target) { // Если искомое значение больше среднего элемента
            left = mid + 1; // Ищем в правой половине массива
        }
        else { // Иначе ищем в левой половине массива
            right = mid - 1;
        }
    }

    // Если элемент не найден, возвращаем -1
    return -1;
}

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n;
    cout << "Введите количество чисел в векторе: ";
    cin >> n;
    vector <int> arr;
    for(int i = 0; i < n; i++) {
        int b;
        cout << "Введите " << i << " число: ";
        cin >> b;
        arr.push_back(b);
    }
    cout << "Введите искомое число: ";
    int target; // Искомое значение
    cin >> target;
    sort(arr.begin(), arr.end());

    int index = binary_search(arr, target); // Ищем индекс элемента
    if (index == -1) { // Если элемент не найден
        cout << "Элемент не найден" << endl;
    }
    else { // Иначе выводим индекс элемента
        cout << "Индекс элемента " << target << ": " << index << endl;
    }





    return 0;
}
