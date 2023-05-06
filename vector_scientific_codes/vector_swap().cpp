#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define array arr

// swap() обменивает значения двух контейнеров:

int main() {
     ios::sync_with_stdio(false);
     cin.tie();
     setlocale(LC_ALL, "Russian");
     cout << "Введите колчиество чисел в первом векторе: ";
     int l1, l2;
     cin >> l1;

     cout << "Введите колчиество чисел во втором векторе: ";
     cin >> l2;
     vector <int> numbers1 (l1);
     vector <int> numbers2 (l2);
     cout << "Введите содержимое первого вектора " << endl;
     for(int i = 0; i < l1; ++i) {
        cout << "Введите " << i << " число: ";
        cin >> numbers1[i];
     }
     cout << endl;

     cout << "Введите содержимое второго вектора " << endl;
     for(int i = 0; i < l2; ++i) {
        cout << "Введите " << i << " число: ";
        cin >> numbers2[i];
     }
     cout << endl;

     if(numbers1.empty()) {
        cout << "Первый вектор пуст! " << endl;
     }
     else {
        cout << "Первый вектор имеет числа! " << endl;
     }

     if(numbers2.empty()) {
        cout << "Второй вектор пуст! " << endl;
     }
     else {
        cout << "Второй вектор имеет числа! " << endl;
     }

     auto iter1 = numbers1.cbegin();
     auto iter2 = numbers2.cend();

     numbers1.insert(iter1 + 1, 5, 999);
     numbers2.insert(iter2 - 1, 3, 999);

     cout << endl;
     cout << "Размер первого вектора после  numbers1.insert(iter1 + 1, 5, 999): " << numbers1.size() << endl;
     cout << "Размер второго вектора после  numbers2.insert(iter2 - 1, 3, 999): " << numbers2.size() << endl;

     cout << "Содержимое первого вектора после  numbers1.insert(iter1 + 1, 5, 999)" << endl;
     for(int i = 0; i < numbers1.size(); ++i) {
        cout << "Элемент под номером #" << i << " = " << numbers1[i] << endl;
     }
     cout << endl;


     cout << "Содержимое второго вектора после   numbers2.insert(iter2 - 1, 3, 999)" << endl;
     for(int i = 0; i < numbers2.size(); ++i) {
        cout << "Элемент под номером #" << i << " = " << numbers2[i] << endl;
     }

     cout << endl;

     cout << "Делаем метод swap() который обеменивает значения двух контейнеров" << endl;
     numbers1.swap(numbers2); // swap() обменивает значения двух контейнеров:


     cout << "Размер первого вектора после numbers1.swap(numbers2): " << numbers1.size() << endl;
     cout << "Размер второго вектора после numbers1.swap(numbers2): " << numbers2.size() << endl;

     cout << "Содержимое первого вектора после numbers1.swap(numbers2)" << endl;
     for(int i = 0; i < numbers1.size(); ++i) {
        cout << "Элемент под номером #" << i << " = " << numbers1[i] << endl;
     }
     cout << endl;


     cout << "Содержимое второго вектора после numbers1.swap(numbers2);" << endl;
     for(int i = 0; i < numbers2.size(); ++i) {
        cout << "Элемент под номером #" << i << " = " << numbers2[i] << endl;
     }

     cout << endl << endl;

     cout << "Мы успешно обменяли значения двух контейнеров!" << endl;



   return 0;
}
