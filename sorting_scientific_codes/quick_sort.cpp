#include <iostream>
using namespace std;

/// Функция для разбиения массива на подмассивы
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; /// Выбираем последний элемент в качестве опорного элемента
    int i = low - 1; /// Инициализируем индекс меньшего элемента

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) { /// Если текущий элемент меньше или равен опорному элементу
            i++; /// Увеличиваем индекс меньшего элемента
            swap(arr[i], arr[j]); /// Меняем местами arr[i] и arr[j]
        }
    }
    swap(arr[i+1], arr[high]); /// Меняем местами arr[i+1] и arr[high]
    return i+1; /// Возвращаем индекс, который разделяет массив на подмассивы
}


/// Функция для сортировки массива методом быстрой сортировки
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); /// Получаем индекс, который разделяет массив на подмассивы

        quickSort(arr, low, pi-1); /// Сортируем левый подмассив
        quickSort(arr, pi+1, high); /// Сортируем правый подмассив
    }
}


int main() {
    int n; /// Переменная для хранения размера массива
    cout << "Enter the size of the array: "; /// Просим пользователя ввести размер массива
    cin >> n; // Считываем размер массива

    int arr[n]; /// Объявляем массив с размером n
    cout << "Enter " << n << " integers: "; /// Просим пользователя ввести элементы массива
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; /// Считываем элементы массива
    }

    quickSort(arr, 0, n-1); /// Вызываем функцию для сортировки массива методом быстрой сортировки

    cout << "Sorted array: "; /// Выводим отсортированный массив
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }


    return 0; /// Возвращаем 0 в качестве статуса завершения программы
}