#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array

/// emplace_back - функция позволяет вставлять элементы в конец списка, без копирования или перемещения.
/// emplace_front - функция позволяет вставлять элементы в начало списка, без копирования или перемещения.

void solve() {
    int n, n1;
    cout << "Введите размер первого листа: ";
    cin >> n;
    cout << "Введите размер второго листа: ";
    cin >> n1;
    list <int> numbers1, numbers2;


    cout << "Введите содержимое первого листа" << endl;
    for(int i = 0; i < n; i++) {
        int a;
        cout << "Элемент #" << i << " : ";
        cin >> a;
        numbers1.emplace_back(a); /// Добавили элемент в конец листа без копирования или перемещения
    }
    cout << endl;


    cout << "Введите содержимое второго листа" << endl;
    for(int i = 0; i < n1; i++) {
        int b;
        cout << "Элемент #" << i << " : ";
        cin >> b;
        numbers2.emplace_back(b); /// Добавили элемент в конец листа без копирования или перемещения
    }
    cout << endl;

    if(numbers1.empty()) {
        cout << "Ваш первый лист пуст!" << endl;
    }
    else {
        cout << "Ваш первый лист не пуст!" << endl;
    }


    if(numbers2.empty()) {
        cout << "Ваш второй лист пуст!" << endl;
    }
    else {
        cout << "Ваш второй лист не пуст!" << endl;
    }
    cout << endl;

    cout << "Создаем реверсивный итератор" << endl;
    cout << "Содержмое первого листа использую реверсивный итератор: ";
    for(list <int>::reverse_iterator iter1 = numbers1.rbegin(); iter1 != numbers1.rend(); ++iter1) {
        cout << *iter1 << " ";
    }
    cout << endl << endl;

    cout << "Содержмое второго листа использую реверсивный итератор: ";
    for(list <int>::reverse_iterator iter2 = numbers2.rbegin(); iter2 != numbers2.rend(); ++iter2) {
        cout << *iter2 << " ";
    }
    cout << endl << endl;


    cout << "Добавляем числа первому листу с помощью insert() " << endl;
    cout << "Введите 1) c какого числа начать вставку чисел 2) Cколько чисел 3) Какая это цифра" << endl;
    cout << "Введите первое число: ";
    int g1, g2, g3;
    cin >> g1;
    cout << "Введите второе число: ";
    cin >> g2;
    cout << "Введите третье число: ";
    cin >> g3;

    auto iter3 = numbers1.begin();
    advance(iter3, g1);
    numbers1.insert(iter3, g2, g3);

    cout << "Содержимое листа после добавления (insert): ";
    for(list <int>::iterator iter4 = numbers1.begin(); iter4 != numbers1.end(); ++iter4)
    {
        cout << *iter4 << " ";
    }
    cout << endl << endl;


    cout << "Добавляем числа второму листу с помощью insert()" << endl;
    cout << "Введите 1) c какого числа начать вставку чисел 2) Cколько чисел 3) Какая это цифра" << endl;
    cout << "Введите первое число: ";
    int g4, g5, g6;
    cin >> g4;
    cout << "Введите второе число: ";
    cin >> g5;
    cout << "Введите третье число: ";
    cin >> g6;

    auto iter5 = numbers2.begin();
    advance(iter5, g4);
    numbers2.insert(iter5, g5, g6);

    cout << "Содержимое листа после добавления (insert): ";
    for(list <int>::iterator iter5 = numbers2.begin(); iter5 != numbers2.end(); ++iter5)
    {
        cout << *iter5 << " ";
    }

    cout << endl << endl;

    cout << "Лист #1" << endl;
    cout << "Удаляем числа с помощью функции erase()" << endl;
    cout << "Введите 1) С какой позиции удалить элементы 2) До какой позиции удалять элементы" << endl;
    cout << "Введите первое число: ";
    int j1, j2;
    cin >> j1;
    cout << "Введите второе число: ";
    cin >> j2;
    j2++;

    auto iter6 = numbers1.begin();
    auto iter7 = numbers1.begin();
    advance(iter6, j1);
    advance(iter7, j2);

   numbers1.erase(iter6, iter7); /// Удаляем числа диапазоне iter6 и iter7
   cout << "Сейчас размер = " << numbers1.size() << endl;
   cout << "Содержимое первого листа: ";
   for(list <int>::iterator iter8 = numbers1.begin(); iter8 != numbers1.end(); ++iter8)
   {
       cout << *iter8 << " ";
   }
   cout << endl << endl;


   cout << "Лист #2" << endl;
   cout << "Удаляем числа с помощью функции erase()" << endl;
   cout << "Введите 1) С какой позиции удалить элементы 2) До какой позиции удалять элементы" << endl;
   cout << "Введите первое число: ";
   int j3, j4;
   cin >> j3;
   cout << "Введите второе число: ";
   cin >> j4;
   j4++;

   auto iter9 = numbers2.begin();
   auto iter10 = numbers2.begin();
   advance(iter9, j3);
   advance(iter10, j4);

   numbers2.erase(iter9, iter10); /// Удаляем числа диапазоне iter9 и iter10
   cout << "Сейчас размер = " << numbers2.size() << endl;
   cout << "Содержимое второго листа: ";
   for(list <int>::iterator iter11 = numbers2.begin(); iter11 != numbers2.end(); ++iter11)
   {
       cout << *iter11 << " ";
   }

   cout << endl << endl;

   cout << "Объмениваем значение двух контейнеров" << endl;
   numbers1.swap(numbers2);
   cout << "Резмер первого листа после обмена: " << numbers1.size() << endl;
   cout << "Содержимое первого листа: ";
   for(int h : numbers1) {
    cout << h << " ";
   }
   cout << endl << endl;
   ;
   cout << "Резмер второго листа после обмена: " << numbers2.size() << endl;
   cout << "Содержимое второго  листа: ";
   for(int q : numbers2) {
    cout << q << " ";
   }
   cout << endl << endl;


    cout << "Лист #1" << endl;
   cout << "Сортируем первый лист" << endl;
   numbers1.sort();
   cout << "Размер первого листа: " << numbers1.size() << endl;
   cout << "Выводим содержимое первого листа: ";
   for(int t : numbers1) {
    cout << t << " ";
   }
   cout << endl << endl;


   cout << "Лист #2" << endl;
   cout << "Сортируем второй лист" << endl;
   numbers2.sort();
   cout << "Размер второго листа: " << numbers2.size() << endl;
   cout << "Вывод содержание второго листа: ";
   for(int o : numbers2) {
    cout << o << " ";
   }
   cout << endl << endl << endl;

   cout << "Напишите число которое нужно убрать с первого листа: ";
   int delete_num;
   cin >> delete_num;
   numbers1.remove(delete_num);
   cout << "Размер первого листа: " << numbers1.size() << endl;
   cout << "Выводим содержимое первого листа: ";
   for(int f : numbers1) {
    cout << f << " ";
   }
   cout << endl << endl;


   cout << "Напишите число которое нужно убрать со второго листа: ";
   int delete_num2;
   cin >> delete_num2;
   numbers2.remove(delete_num2);
   cout << "Размер первого листа: " << numbers2.size() << endl;
   cout << "Выводим содержимое первого листа: ";
   for(int m : numbers2) {
    cout << m << " ";
   }
   cout << endl << endl;


   numbers1.unique();
   cout << "Сейчас мы уберем повторяющиеся цифры c первого листа" << endl;
   cout << "Размер первого листа после unique() = " << numbers1.size() << endl;
   cout << "Содержимое первого листа: ";
   for(int w : numbers1) {
      cout << w << " ";
   }
   cout << endl << endl;



   numbers2.unique();
   cout << "Сейчас мы уберем повторяющиеся цифры cо второго листа" << endl;
   cout << "Размер второго листа после unique() = " << numbers2.size() << endl;
   cout << "Содержимое второго листа: ";
   for(int p : numbers2) {
      cout << p << " ";
   }

   cout << endl << endl;

   cout << "Введите количество чисел которые вы хотите добавить в первый лист с помощью emplace_back():";
   int num1, num2;
   cin >> num1;
   cout << "Введите количество чисел которые вы хотите добавить во второй лист с помощью emplace_back():";
   cin >> num2;

   cout << "Введите содержимое первого листа" << endl;
    for(int i = 0; i < num1; i++) {
        int a;
        cout << "Элемент #" << i << " :  ";
        cin >> a;
        numbers1.emplace_back(a); /// Добавили элемент в конец листа без копирования или перемещения
    }
    cout << endl;


    cout << "Введите содержимое второго листа" << endl;
    for(int i = 0; i < num2; i++) {
        int b;
        cout << "Элемент #" << i << " :  ";
        cin >> b;
        numbers2.emplace_back(b); /// Добавили элемент в конец листа без копирования или перемещения
    }
    cout << endl;


    cout << "Размер первого листа: " << numbers1.size() << endl;
    cout << "Содержание первого листа: ";
    for(int y : numbers1)
    {
        cout << y << " ";
    }
    cout << endl;

    cout << "Размер второго листа: " << numbers2.size() << endl;
    cout << "Содержание второго листа: ";
    for(int y : numbers2)
    {
        cout << y << " ";
    }

    cout << endl << endl;


}



int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    /*

    int t;
    cin >> t;
    while(t--)

    */
    solve();



   return 0;
}
