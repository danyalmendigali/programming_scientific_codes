#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Поиск кратчайшего пути в невзвешенном графе

// Условие задания
// Дан невзвешенный неориентированный граф и его стартовая и конечная вершины.
// Ваша задача - найти кратчайший путь между стартовой и конечной вершинами с помощью обхода в ширину.

void bfsMatrix(vector<vector<int>>& matrix, int startPoint, int endPoint)
{
    int sizeVector = matrix.size();
    vector <bool> visited(sizeVector, false);

    // Создаем вектор parent, который будет хранить информацию о предыдущей вершине на кратчайшем пути от стартовой вершины
    // к каждой другой вершине. Изначально все элементы этого вектора устанавливаются в -1, что означает, что пути еще нет
    vector<int> parent(sizeVector, -1);

    queue <int> q;
    q.push(startPoint);
    visited[startPoint] = true;


    while(!q.empty())
    {
        int numberqueue = q.front();
        q.pop();

        cout << "Посещена вершина: " << numberqueue << "\n";

        for(int i = 0; i < sizeVector; i++)
        {
            if(matrix[numberqueue][i] == 1 && !visited[i])
            {
                q.push(i);
                visited[i] = true;

                // Записываем номер вершины numberqueue в parent[i], чтобы отслеживать путь от startPoint к вершине i.
                parent[i] = numberqueue;
            }
        }
    }

    // Построение и вывод кратчайшего пути
    vector<int> shortestPath; // Будет хранить вершины на кратчайшем пути от startPoint до endPoint. Начально этот вектор пуст

    // Запускается цикл, который начинается с вершины endPoint и продолжается до тех пор, пока не достигнем вершины с номером -1
    for (int v = endPoint; v != -1; v = parent[v]) {
        shortestPath.push_back(v);
    }

    cout << "Кратчайший путь: ";

    // Запускается цикл, который начинается с последнего элемента вектора shortestPath и продолжается до первого элемента.
    for (int i = shortestPath.size() - 1; i >= 0; i--) {
        cout << shortestPath[i] << " ";
    }
    cout << "\n";
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    cout << "Введите размер матрицы: ";
    int sizematrix;
    cin >> sizematrix;

    vector<vector<int>> matrixBFS(sizematrix);

    cout << "Введите матрицу: " << "\n";
    for(int i = 0; i < sizematrix; i++)
    {
        matrixBFS[i].resize(sizematrix);
        for(int j = 0; j < sizematrix; j++)
        {
            cin >> matrixBFS[i][j];
        }
    }

    int startpoint, endpoint;
    cout << "Введите стартовую вершину: ";
    cin >> startpoint;
    cout << "Введите конечную вершину: ";
    cin >> endpoint;

    bfsMatrix(matrixBFS, startpoint, endpoint);

    return 0;
}
