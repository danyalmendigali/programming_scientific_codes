    #include <iostream>
    #include <vector>
    #include <queue>
    #include <windows.h>

    using namespace std;

    void BFS(vector<vector<int>>& adj_matrix, vector<bool>& visited, int start_vertex) {
        int n = adj_matrix.size();
        queue<int> q;

        q.push(start_vertex); // Добавляем стартовую вершину в очередь
        visited[start_vertex] = true; // Помечаем стартовую вершину как посещенную


        while (!q.empty()) {
            int v = q.front(); // Извлекаем вершину из очереди
            q.pop();

            cout << v << " "; // Выводим номер текущей вершины

            // Просматриваем соседей текущей вершины
            for (int i = 0; i < n; i++) { // Если вершина i смежная с текущей вершиной v и не посещена
                if (adj_matrix[v][i] == 1 && !visited[i]) {
                    visited[i] = true; // Помечаем вершину i как посещенную
                    q.push(i); // Добавляем вершину i в очередь для дальнейшего обхода
                }
            }
        }
    }

    int main() {
        cin.tie(0);
        SetConsoleOutputCP(CP_UTF8);
        SetConsoleCP(CP_UTF8);


        int n; // Число вершин графа
        cout << "Введите число вершин графа: ";
        cin >> n;

        vector<vector<int>> adj_matrix(n, vector<int>(n, 0)); // Матрица смежности графа

        cout << "Введите матрицу смежности графа (разделите значения пробелами):\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> adj_matrix[i][j]; // Вводим значения матрицы смежности
            }
        }

        int start_vertex;
        cout << "Введите начальную вершину для обхода: ";
        cin >> start_vertex;

        vector<bool> visited(n, false); // Вектор для хранения информации о посещенных вершинах

        BFS(adj_matrix, visited, start_vertex); // Обход графа в ширину, начиная с заданной вершины

        return 0;
    }

