#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
    list <int> numbers1;
    int n;
    cout << "Введите количество чисел в листе: ";
    cin >> n;
    cout << endl;
    cout << "Введите содержимое листа" << endl;

    for(int i = 0; i < n; ++i)
    {
        cout << "Введите элемент #" << i << ": ";
        int a;
        cin >> a;
        numbers1.push_back(a); /// добавляем в конец листа элементы
    }
    cout << endl;

    if(numbers1.empty()) { /// проверяем пустой ли лист или нет
        cout << "Ваш лист не пуст!" << endl;
    }
    else cout << "Ваш лист пуст!" << endl;
    cout << endl;

    cout << "Создаем реверсивный итератор(выводи лист в обратном порядке)" << endl;
    for (list<int>::reverse_iterator iter = numbers1.rbegin(); iter != numbers1.rend(); ++iter) { /// Выводим лист в обратном порядке использую реверсивный итератор
        cout << *iter << " ";
    }
    cout << endl;

    cout << "Введите количество чисел которые нужно добавить в конец листа с помощью функции push_front(): ";
    int l;
    cin >> l;
    for(int i = 0; i < l; i++) {
        int b;
        cout << "Введите " << i << " элемент: ";
        cin >> b;
        numbers1.push_front(b); /// добавляем элементы в конец листа
    }
    cout << "Создаем второй лист и даем значение равное первому листу" << endl;
    list <int> numbers2 = numbers1;
    cout << "Содержмое второго листа: ";
    for(list <int>::iterator iter3 = numbers2.begin(); iter3 != numbers2.end(); ++iter3 )
    {
        cout << *iter3 << " ";
    }
    cout << endl;

    cout << "Введите с какого по какой элемент вы хотите удалить" << endl;
    int t, y;
    cout << "1. C какого: ";
    cin >> t;
    t--;
    cout << "2. По какой элемент: ";
    cin >> y;
    auto iter4 = numbers2.begin();
    auto iter5 = numbers2.begin();
    advance(iter4, t); /// она позволяет перемещаться по элементам в контейнере с использованием итераторов (advance)
    advance(iter5, y); /// она позволяет перемещаться по элементам в контейнере с использованием итераторов (advance)
    numbers2.erase(iter4, iter5); /// удаляем элементы от iter4 до iter5

    cout << endl;
    cout << "Сейчас содержимое листа: ";

    for(list <int>::iterator iter6 = numbers2.begin(); iter6 != numbers2.end(); ++iter6)
    {
        cout << *iter6 << " ";
    }
    cout << endl;

    cout << "Добавляем числа в лист с помощью insert()" << endl;
    cout << "Введите 1) c какого числа начать вставку чисел 2) Cколько чисел 3) Какая это цифра" << endl;
    cout << "Введите первое число: ";
    int g1, g2, g3;
    cin >> g1;
    cout << "Введите второе число: ";
    cin >> g2;
    cout << "Введите третье число: ";
    cin >> g3;

    auto iter6 = numbers2.begin();
    advance(iter6, g1);
    numbers2.insert(iter6, g2, g3); /// добавляем элементы g2 штук, g3 какое число и iter6 начиная с какого элемента

    cout << endl;
    cout << "Вывод содержимое листа после добавление чисел (insert): ";
    for(list <int>::iterator iter7 = numbers2.begin(); iter7 != numbers2.end(); ++iter7)
    {
        cout << *iter7 << " ";
    }
    cout << endl;

    cout << "Удаляем три последних числа" << endl;
    for(int i = 0; i < 3; i++) {
        numbers2.pop_back(); /// удаляем элементы начиная с конца
    }

    cout << "Вывод содержимое листа после удаления трех чисел: ";
    for(list <int>::iterator iter8 = numbers2.begin(); iter8 != numbers2.end(); ++iter8)
    {
        cout << *iter8 << " ";
    }
    cout << endl;






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





     /*
    list <int> myList {12, 13, 14 ,15};  // Создаем лист
    auto it = myList.begin(); // Создаем итератор на первый элемент
    advance(it, 4); // Перемещаем итератор на 4 элемента вперед
    myList.insert(it, 3, 4); // Начиная с 4 ячейки добавляем три четверки
    cout << "Содержимое листа: ";
    for(auto i = myList.begin(); i != myList.end(); i++) // Вывод лист
    {
        cout << *i << " ";
    }
    */




   return 0;
}
