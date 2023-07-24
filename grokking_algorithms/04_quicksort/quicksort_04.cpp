#include <iostream>
#include <vector>
using namespace std;

vector<int> quicksort(const vector<int>& array) {
    if (array.size() < 2) {
        // Базовый случай, векторы с 0 или 1 элементом уже считаются "отсортированными".
        return array;
    }
    else {
        // Рекурсивный случай
        int pivot = array[0]; // Выбираем опорный элемент (можно выбирать иначе, это зависит от алгоритма)
        vector<int> less, greater; // Создаем подвекторы для элементов меньше и больше опорного элемента.

        for (int i = 1; i < array.size(); i++) {
            if (array[i] <= pivot) { // Меньше опорного элемента значит добавляем в вектор less (будет слева опорного элемента)
                less.push_back(array[i]);
            }
            else {
                greater.push_back(array[i]); // Больше опорного элемента значит добавляем в вектор greater (будет справа опорного элемента)
            }
        }

        // Рекурсивно вызываем quicksort для подвекторов и объединяем результаты.
        vector<int> sortedLess = quicksort(less);
        vector<int> sortedGreater = quicksort(greater);

        // Объединяем результаты и возвращаем отсортированный вектор.
        vector<int> result = sortedLess;
        result.push_back(pivot);
        result.insert(result.end(), sortedGreater.begin(), sortedGreater.end());

        return result;
    }
}

int main() {
    // Входные данные
    vector<int> arr = {10, 5, 2, 3, 20, -1, 0};

    // Вызываем функцию быстрой сортировки
    vector<int> sortedArray = quicksort(arr);

    // Выводим отсортированный массив
    cout << "Sorted array: ";
    for (int num : sortedArray) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
