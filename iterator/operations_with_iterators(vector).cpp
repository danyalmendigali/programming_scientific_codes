#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define array arr

// Используем итераторы для перебора элементов вектора
// *iter: получение элемента, на который указывает итератор
// ++iter: перемещение итератора вперед для обращения к следующему элементу
// -iter: перемещение итератора назад для обращения к предыдущему элементу. Итераторы контейнера forward_list не поддерживают операцию декремента.
// iter1 == iter2: два итератора равны, если они указывают на один и тот же элемент
// iter1 != iter2: два итератора не равны, если они указывают на разные элементы


int main() {
    cin.tie(0);
    setlocale(LC_ALL, "Russian");



    cout << "Программа №1" << endl;
    vector <int> numbers1 {76, 47, 35, 25, 85}, numbers2 {63, 91, 101, 45, 63};

    cout << "Размер первого вектора: " << numbers1.size() << endl;
    cout << "Размер второго вектора: " << numbers2.size() << endl;
    cout << endl;

    cout << "Текущее содержимое первого вектора: ";
    auto iter1 = numbers1.begin(); // получаем итератор
    while(iter1 != numbers1.end()) // пока не дойдем до конца
    {
        cout << *iter1 << " "; // получаем элементы через итератор
        ++iter1; // перемещаемся вперед на один элемент

    }
    cout << endl;


    cout << "Текущее содержимое второго вектора: ";
    auto iter2 = numbers2.begin();
    while(iter2 != numbers2.end())
    {
        cout << *iter2 << " ";
        ++iter2;
    }
    cout << endl << endl;





     cout << "Программа №2" << endl;
     vector <int> v {1, 2, 3, 4, 5};
    auto iter = v.begin();
    while(iter != v.end()) // пока не дойдем до конца
    {

        *iter = (*iter) * (*iter); // возводим число в квадрат
        ++iter;
    }

    for(iter = v.begin(); iter < v.end(); ++iter)
    {
        cout << *iter << " ";
    }
    cout << endl << endl;






    cout << "Программа №3" << endl;
    vector <int> numbers;
    for(int count = NULL; count < 5; count++) {
        numbers.push_back(count);
    }
    vector <int>::const_iterator it; // объявляем итератор только для чтения
    it = numbers.begin(); // присваиваем ему начальный элемент вектора
    while(it != numbers.end()) // пока итератор не достигнет последнего элемента
    {
        cout << *it << " "; // выводим значение элемента, на который указывает итератор
        ++it; // и переходим к следующему элементу
    }




    return 0;
}
