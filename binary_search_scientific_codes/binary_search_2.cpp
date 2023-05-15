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
    vector <int> binary_numbers;
    for(int i = 0; i < n; i++) {
        int b;
        cout << "Введите " <<  i << " элемент: ";
        cin >> b;
        binary_numbers.push_back(b);
    }

    sort(binary_numbers.begin(), binary_numbers.end());
    cout << "Введите число которое хотите найти: ";
    int key;
    cin >> key;

    bool flag = false;
    int l = 0, r = binary_numbers.size() - 1;
    int mid;

    while((l <= r) && (flag != true)) {
        mid = (l + r) / 2;

        if(binary_numbers[mid] == key) {
            flag = true;
        }
        if(binary_numbers[mid] > key) {
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
