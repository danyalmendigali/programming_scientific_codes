#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Обход графа в ширину [матрица]

void bfsMatrix(const vector<vector<int>>& matrix, int startVertex) // startVertex - Начальная вершина
{
    int n = matrix.size(); // Здесь n представляет размер матрицы смежности matrix, то есть количество вершин в графе.

    // Создается вектор visited, который будет отслеживать, была ли вершина посещена во время обхода. Изначально все элементы вектора
    // устанавливаются в значение false, что означает, что ни одна из вершин пока не была посещена.
    vector <bool> visited(n, false);

    // Создается очередь q, которая будет использоваться для хранения вершин, которые нужно посетить.
    queue <int> q;


    // Начальная вершина startVertex помещается в конец очереди q, чтобы начать обход с этой вершины
    q.push(startVertex);

    // Флаг посещения для начальной вершины startVertex устанавливается в true, так как мы её уже посетили и она находится в очереди.
    visited[startVertex] = true;


    while(!q.empty()) // Цикл будет выполняться, пока очередь q не станет пустой
    {
        int vertex = q.front(); // Извлекаем вершину из начала очереди q и сохраняем её в переменную vertex.
        q.pop(); //  Удаляем вершину из начала очереди q, так как мы её уже посетили и обработали.


        cout << "Посещена вершина: " << vertex << "\n";



        for(int i = 0; i < n; i++) //  Запускаем цикл для перебора всех вершин, смежных с вершиной vertex.
        {
            if(matrix[vertex][i] == 1 && !visited[i]) // Проверяем, существует ли ребро между вершинами vertex и i и не была ли вершина i уже посещена
            {
                // Если вершина i не была посещена и существует ребро между вершинами vertex и i, то добавляем вершину i в конец очереди q,
                // чтобы посетить её позже.
                q.push(i);

                // Устанавливаем флаг посещения для вершины i в значение true, так как мы её добавили в очередь и посетим позже
                visited[i] = true;
            }
        }

    }
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    int sizeMatrix;
    cout << "Введите размер матрицы: ";
    cin >> sizeMatrix;
    vector<vector<int>> matrix(sizeMatrix); // Создаем матрицу


    cout << "Введите элементы матрицы:" << endl;
    for(int i = 0; i < sizeMatrix; i++)
    {
        //  Здесь происходит изменение размера вектора matrix[i] (то есть строки матрицы) до размера sizeMatrix. Это делается для того,
        // чтобы убедиться, что каждая строка имеет нужное количество элементов (столбцов
        matrix[i].resize(sizeMatrix);
        for(int j = 0; j < sizeMatrix; j++)
        {
            cin >> matrix[i][j];
        }
    }


    int startVertex = 0; // Начальная вершина для обхода

    bfsMatrix(matrix, startVertex);







    return 0;
}

