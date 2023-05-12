#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
    list <int> myList1;
    int n;
    cout << "Введите количество чисел в листе: ";
    cin >> n;
    cout << "Введите содержимое листа" << endl;
    for(int i = 0;  i < n; i++) {
        int a;
        cout << "Элемент #" << i << " : ";
        cin >> a;
        myList1.push_back(a);
    }
    cout << endl;

    if(myList1.empty()) {
        cout << "Ваш лист пуст!" << endl;
    }
    else {
        cout << "Ваш лист не пуст!" << endl;
    }
    cout << endl;

    cout << "Создаем реверсивный итератор первому листу(выводи лист в обратном порядке)" << endl;
    cout << "Лист в обратном порядке: ";
    for(list <int>::reverse_iterator iter1 = myList1.rbegin(); iter1 != myList1.rend(); ++iter1)
    {
        cout << *iter1 << " ";
    }
    cout << endl << endl;



    cout << "Добавляем числа листу с помощью insert() " << endl;
    cout << "Введите 1) c какого числа начать вставку чисел 2) Cколько чисел 3) Какая это цифра" << endl;
    cout << "Введите первое число: ";
    int g1, g2, g3;
    cin >> g1;
    cout << "Введите второе число: ";
    cin >> g2;
    cout << "Введите третье число: ";
    cin >> g3;

    auto iter2 = myList1.begin();
    advance(iter2, g1);
    myList1.insert(iter2, g2, g3);

    cout << "Содержимое листа после добавления(insert): ";
    for(list <int>::iterator iter3 = myList1.begin(); iter3 != myList1.end(); ++iter3)
    {
        cout << *iter3 << " ";
    }
    cout << endl;


    cout << "Удаляем числа с помощью функции erase()" << endl;
    cout << "Введите 1) С какой позиции удалить элементы 2) До какой позиции удалять элементы" << endl;
    cout << "Введите первое число: ";
    int h1, h2;
    cin >> h1;
    cout << "Введите второе число: ";
    cin >> h2;
    h2++;

    auto iter4 = myList1.begin();
    auto iter5 = myList1.begin();
    advance(iter4, h1);
    advance(iter5, h2);

    myList1.erase(iter4, iter5); /// Удаляем числа диапазоне iter4 и iter5

    cout << "Содержимое после удаления элементов erase(): ";
    for(list <int>::iterator iter6 = myList1.begin(); iter6 != myList1.end(); ++iter6)
    {
        cout << *iter6 << " ";
    }
    cout << endl << endl;
    cout << "Создаем второй лист List2 {45, 74, 25, 72, 64, 26, 75} " << endl;
    cout << endl;
    list <int> myList2 {45, 74, 25, 72, 64, 26, 75};

    cout << "Сортируем первый лист sort()" << endl;
    myList1.sort(); /// Сортируем первый лист
    cout << "Размер первого листа: " << myList1.size() << endl;
    cout << "Содержимое первого листа после сортировки элементов sort(): ";
    for(list <int>::iterator iter7 = myList1.begin(); iter7 != myList1.end(); ++iter7)
    {
        cout << *iter7 << " ";
    }
    cout << endl << endl;

    cout << "Сортируем второй  лист sort()" << endl;
    myList2.sort(); /// Сортируем второй лист
    cout << "Размер второго листа: " << myList2.size() << endl;
    cout << "Содержимое второго листа после сортировки элементов sort(): ";
    for(list <int>::iterator iter8 = myList2.begin(); iter8 != myList2.end(); ++iter8)
    {
        cout << *iter8 << " ";
    }
    cout << endl << endl;

    cout << "Применяем функцию merge()" << endl;
    myList1.merge(myList2); /// Слияния двух отсортированных диапазонов элементов в один отсортированный диапазон
    cout << endl;
    cout << "Теперь размер листа = " << myList1.size() << endl;
    cout << "Выводим весь лист: ";
    for(list <int>::iterator iter9 = myList1.begin(); iter9 != myList1.end(); ++iter9)
    {
        cout << *iter9 << " ";
    }

    cout << endl << endl;

    cout << "Введите число которое хотите убрать и листа: ";
    int delete_number;
    cin >> delete_number;
    myList1.remove(delete_number); /// remove() удаляет все элементы со значением delete_number
    cout << endl;

    cout << "Размер листа после удаления числа которые вы ввели = " << myList1.size() << endl;
    cout << "Выводим весь лист: ";
    for(list <int>::iterator iter10 = myList1.begin(); iter10 != myList1.end(); ++iter10)
    {
        cout << *iter10 << " ";
    }
    cout << endl << endl;

    cout << "Используем функцию unique() которая убирает повторяющиеся элементы" << endl;
    auto iter12 = myList1.begin();
    auto iter13 = myList2.end();
    myList1.unique(); /// Убирает повторяющиеся элементы


    cout << "Выводим лист после функции unique(): ";
    for(list <int>::iterator iter11 = myList1.begin(); iter11 != myList1.end(); ++iter11)
    {
        cout << *iter11 << " ";
    }


}




int main() {
    cin.tie(0);
    setlocale(LC_ALL, "Russian");

     /*
    int t;
    cin >> t;
    while(--t)
     */
        solve();







   return 0;
}

