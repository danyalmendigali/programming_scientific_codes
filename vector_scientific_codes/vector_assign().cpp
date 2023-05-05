#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define array arr

// Функция assign() позволяет заменить все элементы вектора определенным набором:

int main() {
     ios::sync_with_stdio(false);
     cin.tie();
     setlocale(LC_ALL, "Russian");


     cout << "Вектор #1: " << endl;
     cout << "Введите количество чисел в первом векторе: ";
     int l1, l2;
     cin >> l1;
     cout << "Введите количество чисел во втором векторе: ";
     cin >> l2;
     vector <int> numbers1 (l1);
     vector <int> numbers2 (l2);
     cout << "Заполните первый вектор " << l1 << " числами: " << endl;
     for(int i = 0; i < l1; i++) {
        cout << "Введите " << i << " чисел: ";
        cin >> numbers1[i];
     }
     cout << endl;

     cout << "Заполните второй вектор " << l2 << " числами: " << endl;
     for(int i = 0; i < l2; i++) {
        cout << "Введите " << i << " чисел: ";
        cin >> numbers2[i];
     }
     cout << endl;

     auto iter1 = numbers1.cend();
     auto iter2 = numbers2.cbegin();

     numbers1.insert(iter1 - 1, {34, 23, 15, 23, 63});
     numbers2.insert(iter2 + 2, 3, 4);

     cout << "Сейчас размер первого вектора = " << numbers1.size() << endl;
     cout << "Сейчас размер второго вектора = " << numbers2.size() << endl;
     cout << endl;
     cout << "Выводим содержимое первого вектора: ";
     for(int i = 0; i < numbers1.size(); i++) {
        cout << numbers1[i] << " ";
     }
     cout << endl;


     cout << "Выводим содержимое второго вектора: ";
     for(int i = 0; i < numbers2.size(); i++) {
        cout << numbers2[i] << " ";
     }
     cout << endl << endl;

     cout << "Изменяем размер первого вектора - numbers1.resize(13, 898) " << endl;
     numbers1.resize(13, 898);

     cout << "Изменяем размер второго вектора - numbers2.resize(15, 999) " << endl;
     numbers2.resize(15, 999);
     cout << endl;

     cout << "Выводим содержимое первого вектора: ";
     for(int i = 0; i < numbers1.size(); i++) {
        cout << numbers1[i] << " ";
     }
     cout << endl;


     cout << "Выводим содержимое второго вектора: ";
     for(int i = 0; i < numbers2.size(); i++) {
        cout << numbers2[i] << " ";
     }
     cout << endl << endl;


     numbers1.assign(12, 1090); // Заменяю 12 элементов в векторе на 1090
     numbers2.assign(0, 1090); // Заменяю 0 элементов в векторе на 1090

     cout << "Размер первого вектора после  numbers1.assign(12, 1090): " << numbers1.size() << endl;
     cout << "Размер второго вектора после  numbers2.assign(0, 1090): " << numbers2.size() << endl;

     cout << "Содержимое первого вектора: ";
     for(int i = 0; i < numbers1.size(); i++) {
        cout << numbers1[i] << " ";
     }
     cout << endl;


     cout << "Содержимое второго вектора: ";
     for(int i = 0; i < numbers2.size(); i++) {
        cout << numbers2[i] << " ";
     }
     cout << endl;

     if(numbers1.empty()) {
        cout << "Первый вектор пуст!" << endl;
     }
     else {
        cout << "В первом векторе есть числа!" << endl;
     }


     if(numbers2.empty()) {
        cout << "Второй вектор пуст!" << endl;
     }
     else {
        cout << "Во втором векторе есть числа!" << endl;
     }







     /*
     vector <string> string1 {"C++", "JAVA", "C#", "PYTHON"};
     vector <string> string2 {"TOM", "DANIYAL", "SAM"};
     string2.assign(10, "C++");
     for(int i = 0; i < string2.size(); i++) {
        cout << string2[i] << " ";
     }
     */



   return 0;
}


