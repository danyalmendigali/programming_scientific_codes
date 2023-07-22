#include <iostream>
#include <vector>
#include <windows.h>

using namespace std;

int binarySearchForInsertion(const vector <int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            // Элемент уже присутствует, возвращаем его индекс
            return mid;
        } else if (arr[mid] < target) {
            // Искомый элемент больше значения в середине, ищем справа от середины
            left = mid + 1;
        } else {
            // Искомый элемент меньше значения в середине, ищем слева от середины
            right = mid - 1;
        }
    }

    // Искомый элемент не найден, возвращаем индекс для вставки
    return left;
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    vector<int> sortedArray = {1, 3, 5, 7, 9};
    int target = 4;

    int insertionIndex = binarySearchForInsertion(sortedArray, target);
    cout << "Индекс вставки для " << target << " это: " << insertionIndex << endl;

    return 0;
}
