#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Реализация BFS

void bfsMatrix(vector<vector<int>> &matrix, int startMatrix, int endMatrix)
{
    int size_matrix = matrix.size();
    vector <bool> visited(size_matrix, 0);
    vector <int> prog(size_matrix, -1);
    queue <int> q;

    q.push(startMatrix);
    visited[startMatrix] = true;

    while(!q.empty())
    {
        int elementFront = q.front();
        q.pop();
        cout << "Посещена вершина: " << elementFront << "\n";
        for(int i = 0; i < size_matrix; i++)
        {
            if(matrix[elementFront][i] == 1 && !visited[i])
            {
                q.push(i);
                visited[i] = true;

                // Это поможет нам позже восстановить кратчайший путь от стартовой вершины до каждой вершины
                prog[i] = elementFront;
            }
        }
    }

    // Это объявление вектора elem, который будет содержать вершины кратчайшего пути в обратном порядке.
    // Здесь мы будем добавлять вершины вектора elem от endMatrix до startMatrix.
    vector <int> elem;


    // Это цикл, который начинается с вершины endMatrix и продолжается до тех пор, пока не достигнем вершины с номером -1. Внутри цикла мы
    // обновляем значение i на prog[i], что означает переход к предыдущей вершине в пути. Это сделано для обратного прохода от конечной вершины к начальной.
    for(int i = endMatrix; i != -1; i = prog[i])
    {
        // Внутри цикла мы добавляем текущую вершину i в вектор elem. Таким образом, вектор elem будет содержать вершины кратчайшего пути в обратном порядке
        elem.push_back(i);
    }

    cout << "Кратчайший путь: ";

    // Это цикл, который начинается с последнего элемента вектора elem (конечная вершина пути) и продолжается до первого элемента
    // (начальная вершина пути). Здесь мы выводим вершины пути в правильном порядке.
    for(int i = elem.size() - 1; i >= 0; i--)
    {
        cout << elem[i] << " ";
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


