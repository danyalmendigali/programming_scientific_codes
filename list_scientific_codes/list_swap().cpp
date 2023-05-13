#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

/// reverse() в C++ - это алгоритм из стандартной библиотеки (STL), который изменяет порядок элементов в контейнере на обратный.

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



   cout << "Меняем местами два листа" << endl;
   numbers1.swap(numbers2);
   cout << "Размер первого листа = " << numbers1.size() << endl;
   cout << "Содержимое: ";
   for(list <int>::iterator iter18 = numbers1.begin(); iter18 != numbers1.end(); ++iter18)
   {
       cout << *iter18 << " ";
   }

   cout << "Размеер второго листа = " << numbers2.size() << endl;
   cout << "Содержимое: ";
   for(list <int>::iterator iter19 = numbers2.begin(); iter19 != numbers2.end(); ++iter19)
   {
       cout << *iter19 << " ";
   }



   cout << "Лист #1" << endl;
   cout << "Сортируем первый лист" << endl;
   numbers1.sort();
   cout << "Размер первого листа: " << numbers1.size() << endl;
   cout << "Выводим содержимое первого листа: ";
   for(list <int>::iterator iter12 = numbers1.begin(); iter12 != numbers1.end(); ++iter12)
   {
       cout << *iter12 << " ";
   }
   cout << endl << endl;


   cout << "Лист #2" << endl;
   cout << "Сортируем второй лист" << endl;
   numbers2.sort();
   cout << "Размер второго листа: " << numbers2.size() << endl;
   cout << "Вывод содержание второго листа: ";
   for(list <int>::iterator iter13 = numbers2.begin(); iter13 != numbers2.end(); ++iter13)
   {
       cout << *iter13 << " ";
   }
   cout << endl << endl << endl;

   cout << "Преминяем функцию merge()" << endl;
   numbers1.merge(numbers2); /// Слияния двух отсортированных диапазонов элементов в один отсортированный диапазон

   cout << "Размер листа = " << numbers1.size() << endl;
   cout << "Вывод содержание второго листа: ";
   for(list <int>::iterator iter14 = numbers1.begin(); iter14 != numbers1.end(); ++iter14)
   {
       cout << *iter14 << " ";
   }
   cout << endl << endl;

   cout << "Введите число которое хотите убрать c листа: ";
   int delete_num;
   cin >> delete_num;
   numbers1.remove(delete_num); /// remove() удаляет все элементы со значением delete_num
   cout << "Размер листа после удаления таких цифр как " << delete_num << " = " << numbers1.size() << endl;
   cout << "Содержание: ";
   for(list <int>::iterator iter15 = numbers1.begin(); iter15 != numbers1.end(); ++iter15)
   {
       cout << *iter15 << " ";
   }
   cout << endl << endl;


   cout << "Сейчас мы уберем повторяющиеся цифры" << endl;
   numbers1.unique(); /// Убирает повторяющиеся элементы
   cout << "Размер листа = " << numbers1.size() << endl;
   cout << "Содержание: ";
   for(list <int>::iterator iter16 = numbers1.begin(); iter16 != numbers1.end(); ++iter16)
   {
       cout << *iter16 << " ";
   }

   cout << endl << endl;

   cout << "Сейчас для вывода листа используем функцию reverse() она выведит лист в обратном порядке";
   reverse(numbers1.begin(), numbers1.end()); /// изменили порядок на обратный
   cout << endl;

   cout << "Выводим содержание: ";
   for(list <int>::iterator iter17 = numbers1.begin(); iter17 != numbers1.end(); ++iter17)
   {
       cout << *iter17 << " ";
   }
   cout << endl << endl;

}



int main() {
    cin.tie(0);
    setlocale(LC_ALL, "Russian");
    /*

    int t;
    cin >> t;
    while(t--)

    */
      solve();







   return 0;
}

