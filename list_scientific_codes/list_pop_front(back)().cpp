#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array

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
        numbers1.push_back(a);
    }
    cout << endl;


    cout << "Введите содержимое второго листа" << endl;
    for(int i = 0; i < n1; i++) {
        int b;
        cout << "Элемент #" << i << " : ";
        cin >> b;
        numbers2.push_back(b);
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

      auto max_1 = max_element(numbers1.begin(), numbers1.end());
      auto max_2 = max_element(numbers2.begin(), numbers2.end());
      auto min_1 = min_element(numbers1.begin(), numbers1.end());
      auto min_2 = min_element(numbers2.begin(), numbers2.end());

   cout << "Находим максимум в первом листе" << endl;
   cout << "Максимальный элемент: " << *max_1 << endl;
   cout << endl;


   cout << "Находим максимум во втором листе" << endl;
   cout << "Максимальный элемент: " << *max_2 << endl;
   cout << endl;


   cout << "Находим минимум в первом листе" << endl;
   cout << "Минимальный элемент: " << *min_1 << endl;
   cout << endl;



   cout << "Находим минимум во втором листе" << endl;
   cout << "Минимальный элемент: " << *min_2 << endl;
   cout << endl;




   cout << "Лист #1" << endl;
   cout << "Сортируем первый лист" << endl;
   numbers1.sort(); /// Сортируем первый лист
   cout << "Размер первого листа: " << numbers1.size() << endl;
   cout << "Выводим содержимое первого листа: ";
   for(int j : numbers1) {
     cout << j << " ";
   }
   cout << endl << endl << endl;



   cout << "Лист #2" << endl;
   cout << "Сортируем второй лист" << endl;
   numbers2.sort(); /// Сортируем второй лист
   cout << "Размер второго листа: " << numbers2.size() << endl;
   cout << "Вывод содержание второго листа: ";
   for(int t : numbers2) {
     cout << t << " ";
   }
   cout << endl << endl << endl;


   cout << "Введите число которое хотите убарть с первого листа: ";
   int list_delete_1;
   cin >> list_delete_1;
   numbers1.remove(list_delete_1);
   cout << "Размер первого листа после удаления: " << numbers1.size() << endl;
   cout << "Содержимое первого листа: ";
   for(auto d : numbers1) {
       cout << d << " ";
   }
   cout << endl;

   cout << "Введите число которое хотите убрать со второго листа: ";
   int list_delete_2;
   cin >> list_delete_2;
   numbers2.remove(list_delete_2);
   cout << "Размер второго листа после удаления: " << numbers2.size() << endl;
   cout << "Содержимое второго листа: ";
   for(auto f : numbers2) {
      cout << f << " ";
   }
   cout << endl << endl;


   cout << "Сейчас мы уберем повторяющиеся цифры c первого листа" << endl;
   numbers1.unique();
   cout << "Размер первого листа после unique(): " << numbers1.size() << endl;
   cout << "Содержимое первого листа после unique(): ";
   for(int h : numbers1) {
      cout << h << " ";
   }
   cout << endl << endl;

   cout << "Сейчас мы уберем повторяющиеся цифры cо второго листа" << endl;
   numbers1.unique();
   cout << "Размер второго листа после unique(): " << numbers2.size() << endl;
   cout << "Содержимое второго листа после unique(): ";
   for(int h : numbers2) {
      cout << h << " ";
   }
   cout << endl << endl;

   cout << "Мы используем функцию pop_front() для первого листа 1 раза " << endl;

   for(int i = 0; i < 1; i++) {
       numbers1.pop_front();
   }
   cout << "Сейчас размер первого листа: " << numbers1.size() << endl;
   cout << "Теперь выводим содержиоме первого листа: ";
   for(int g : numbers1) {
     cout << g << " ";
   }
    cout << endl;

    cout << "Сейчас мы используем функцию pop_front() для второго листа 1 раза " << endl;

    for(int i = 0; i < 1; i++) {
        numbers2.pop_front();
    }
    cout << "Сейчас размер второго листа: " << numbers2.size() << endl;
    cout << "Теперь выводим содержимое второго листа: ";
    for(int j : numbers2) {
        cout << j << " ";
    }
    cout << endl << endl;

    cout << "Сейчас мы используем функцию pop_back() для первого листа 1 раз " << endl;
    for(int i = 0; i < 1; i++) {
        numbers1.pop_back();
    }

    cout << "Сейчас размер первого листа: " << numbers1.size() << endl;
    cout << "Теперь выводим содержимое первого листа: ";
    for(int g : numbers1) {
        cout << g << " ";
    }
    cout << endl;

    cout << "Сейчам мы используем функцию pop_bacK() для второго листа 1 раз " << endl;
    for(int i = 0; i < 1; i++) {
        numbers2.pop_back();
    }

    cout << "Сейчас размер второго листа: " << numbers2.size() << endl;
    cout << "Теперь выводим содержимое второго листа: ";
    for(int f : numbers2) {
        cout << f << " ";
    }
    cout << endl << endl;



}

int main() {
    cin.tie(0);
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    solve();





   return 0;
}

