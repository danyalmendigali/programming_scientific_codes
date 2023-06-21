#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <sstream>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Поиск k-ого наибольшего элемента в бинарном дереве с использованием priority_queue:


struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : val(value), left(nullptr), right(nullptr) {}
};

int findKthLargest(TreeNode* root, int k) {
    priority_queue<int, vector<int>, greater<int>> pq;

    function<void(TreeNode*)> inorderTraversal = [&](TreeNode* node) {
        if (node == nullptr) {
            return;
        }

        inorderTraversal(node->left);
        pq.push(node->val);
        if (pq.size() > k) {
            pq.pop();
        }
        inorderTraversal(node->right);
    };

    inorderTraversal(root);

    return pq.top();
}



int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    // Создать бинарное дерево
    TreeNode* root = new TreeNode(6);
    root->left = new TreeNode(4);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(7);
    root->right->right = new TreeNode(9);

    int k = 3;

    int kthLargest = findKthLargest(root, k);

    cout << "K-й наибольший по величине элемент: " << kthLargest << endl;



    return 0;

}


