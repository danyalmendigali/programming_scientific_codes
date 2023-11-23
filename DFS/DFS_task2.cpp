#include <iostream>
#include <vector>
#include <limits>
#include <queue>
#include <windows.h>
using namespace std;

const int INF = 1e9;

// Эта функция реализует DFS для проверки на наличие цикла в графе.
// Если во время обхода встречается вершина, которая уже в стеке, это указывает на наличие цикла.
bool dfs(vector<vector<int>> &matrix, int startPoint, vector<bool> &visited, vector<bool> &inStack) {
    int size_matrix = matrix.size();
    visited[startPoint] = true;
    inStack[startPoint] = true;

    for(int i = 0; i < size_matrix; i++) {
        if(matrix[startPoint][i] == 1) {
            if(!visited[i]) {
                if(dfs(matrix, i, visited, inStack)) {
                    return true; // Найден цикл
                }
            }
            // Если вершина уже была посещена и находится в текущем стеке, это указывает на наличие цикла.
            else if(inStack[i]) {
                return true;
            }
        }
    }

    inStack[startPoint] = false; // Убираем вершину из стека перед возвратом
    return false;
}

int main() {
    cin.tie(nullptr);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n, m;
    cout << "Введите количество вершин: ";
    cin >> n;

    cout << "Введите количество ребер: ";
    cin >> m;

    // Инициализация матрицы смежности
    vector<vector<int>> matrix(n, vector<int>(n, 0));
    cout << "Заполните ребра в форме(u, v): " << "\n";
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        matrix[u][v] = 1;
        matrix[v][u] = 1;
    }

    // Инициализация массивов для отслеживания посещенных вершин и вершин в стеке.
    vector<bool> visited(n, false);
    vector<bool> inStack(n, false);
    bool cycle = false;

    // Проходимся по всем вершинам и запускаем DFS
    for(int i = 0; i < n; i++) {
        if(!visited[i]) {
            if(dfs(matrix, i, visited, inStack)) {
                cycle = true; // Граф имеет цикл
                break;
            }
        }
    }

    if(cycle) {
        cout << "Граф имеет цикл" << "\n";
    } else {
        cout << "Граф не имеет цикла " << "\n";
    }

    return 0;
}
