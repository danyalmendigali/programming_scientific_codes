#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Проверка на наличие цикла в связанном списке с использованием std::unordered_set:


struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

bool hasCycle(ListNode* head) {
    unordered_set<ListNode*> nodeSet;
    ListNode* current = head;

    while (current != nullptr) {
        if (nodeSet.count(current) > 0) {
            return true;  // Обнаружен цикл
        }
        nodeSet.insert(current);
        current = current->next;
    }

    return false;  // Цикл не обнаружен
}



int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    // Создать цикл: 1 -> 2 -> 3 -> 4 -> 2
    ListNode* head = new ListNode(1);
    ListNode* node2 = new ListNode(2);
    ListNode* node3 = new ListNode(3);
    ListNode* node4 = new ListNode(4);
    head->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node2;

    bool hasCycle = hasCycle(head);

    out << "Имеет цикл: " << boolalpha << hasCycle << endl;

    // Очистить память
    delete node4;
    delete node3;
    delete node2;
    delete head;



   return 0;
}
