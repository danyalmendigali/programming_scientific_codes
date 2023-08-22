#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// класс стек

class Stack
{
private:
    enum { MAX = 10 };  // немного нестандартный синтаксис
    int st[MAX]; // стек в виде массива
    int top; // вершина стека
public:
    Stack() // конструктор
    {
      top = 0;
    }

    void push(int var) // поместить в стек
    {
        st[++top] = var;
    }

    int pop() // взять из стека
    {
        return st[top--];
    }


};


int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    Stack s1;

     s1.push(11);
     s1.push(22);

     cout << "1: " << s1.pop() << endl;
     cout << "2: " << s1.pop() << endl;

     s1.push(33);
     s1.push(44);
     s1.push(55);
     s1.push(66);

     cout << "3: " << s1.pop() << endl;
     cout << "4: " << s1.pop() << endl;
     cout << "5: " << s1.pop() << endl;
     cout << "6: " << s1.pop() << endl;



    return 0;
}



