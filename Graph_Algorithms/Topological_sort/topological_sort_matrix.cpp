#include <iostream>
#include <vector>
#include <algorithm>
#include <windows.h>

using namespace std;

void dfs(int startPoint, const vector<vector<int>>& matrix, vector<bool>& visited, vector<int>& result) {

    int size_matrix = matrix.size();
    visited[startPoint] = true;

    for (int i = 0; i < size_matrix; i++) {

        if (matrix[startPoint][i] == 1 && !visited[i]) {
            dfs(i, matrix, visited, result);
        }
    }
    result.push_back(startPoint);
}

// Функция топологической сортировки
vector<int> topological_sort(const vector<vector<int>>& matrix) {
    int size_matrix = matrix.size(); // Получаем количество вершин в графе
    vector<bool> visited(size_matrix, false); // Создаём вектор для отслеживания посещённых вершин, изначально все непосещены
    vector<int> result; // Вектор для хранения результата (топологически упорядоченные вершины)

    // Проходим по всем вершинам
    for (int i = 0; i < size_matrix; ++i) {
        if (!visited[i]) // Если вершина не была посещена
            dfs(i, matrix, visited, result); // Запускаем обход из неё
    }

    reverse(result.begin(), result.end()); // Переворачиваем список, чтобы получить правильный порядок
    return result; // Возвращаем топологически упорядоченные вершины
}

int main() {
    cin.tie(); // Устанавливаем связь между потоками ввода и вывода (здесь нет аргументов, поэтому это не имеет эффекта)
    SetConsoleOutputCP(CP_UTF8); // Устанавливаем кодировку UTF-8 для вывода на консоль
    SetConsoleCP(CP_UTF8); // Устанавливаем кодировку UTF-8 для ввода с консоли

    cout << "Введите размер матрицы: ";
    int size_matrix;
    cin >> size_matrix;

    vector<vector<int>> graph(size_matrix, vector<int>(size_matrix));
    cout << "Введите матрицу: " << "\n";
    for(int i = 0; i < size_matrix; i++)
    {
        for(int j = 0; j < size_matrix; j++)
        {
            cin >> graph[i][j];
        }
    }


    vector<int> ans = topological_sort(graph); // Получаем топологически упорядоченные вершины

    cout << "Топологический порядок вершин:" << "\n";
    for (int vertex : ans) {
        cout << vertex << " "; // Выводим вершины в топологическом порядке
    }
    cout << endl;

    return 0;
}
