#include <bits/stdc++.h>
#include <windows.h>

#define optimus_prime  cin.tie(0); cout.tie(0)
#define all(a) a.begin() , a.end()
#define endl "\n"
#define vll vector<long long>
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define sz size()
#define ll long long
#define F first
#define S second

using namespace std;

const ll N = 1e9; // Константа N (не используется в коде)
const ll inf = 1e9 + 9; // Константа inf (не используется в коде)
const ll mod = 1e9 + 7; // Константа mod (не используется в коде)

// Функция Dijkstra для поиска кратчайшего пути
void dijkstra(vector<vector<ll>>& dp, ll startPoint, ll endPoint, vector<ll>& dist, vector<ll> &path)
{
    ll size_dp = dp.size(); // Получение размера матрицы
    vector<bool> visited(size_dp, false); // Вектор для отслеживания посещенных вершин
    dist.assign(size_dp, inf); // Инициализация вектора расстояний бесконечностью
    path.assign(size_dp, -1); // Инициализация вектора пути значениями -1

    dist[startPoint] = 0; // Установка расстояния от начальной вершины до самой себя равным 0
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq; // Создание приоритетной очереди для хранения пар (расстояние, вершина)
    pq.push({0, startPoint}); // Добавление начальной вершины в очередь с расстоянием 0

    while(!pq.empty()) // Пока очередь не пуста
    {
        ll u = pq.top().S; // Извлечение вершины с наименьшим расстоянием
        pq.pop(); // Удаление вершины из очереди

        FOR(v, 0, size_dp) // Перебор соседних вершин
        {
            if(dp[u][v] != 0 && !visited[v]) // Если есть ребро и вершина не посещена
            {
                int newDist = dist[u] + dp[u][v]; // Вычисление нового расстояния до вершины v
                if(newDist < dist[v]) // Если новое расстояние меньше текущего
                {
                    dist[v] = newDist; // Обновление расстояния
                    path[v] = u; // Обновление пути до вершины v

                    pq.push({dist[v], v}); // Добавление вершины v с новым расстоянием в очередь
                }
            }
        }
        visited[u] = true; // Помечаем вершину как посещенную
    }
}

signed main() // Основная функция программы
{
    SetConsoleOutputCP(CP_UTF8); // Настройка кодировки консоли для вывода UTF-8
<<<<<<< HEAD
    SetConsoleCP(CP_UTF8); // Настройка коди    ровки консоли для ввода UTF-8
=======
    SetConsoleCP(CP_UTF8); // Настройка кодировки консоли для ввода UTF-8
>>>>>>> 03bdd7d4fbb473b5126b0de653c6b14a55cb8216

    optimus_prime; // Активация макроса для ускорения ввода/вывода

    ll size_dp; // Переменная для хранения размера матрицы
    cout << "Введите размер матрицы: "; // Вывод сообщения пользователю
    cin >> size_dp; // Считывание размера матрицы
<<<<<<< HEAD
        int startPoint, endPoint; // Переменные для начальной и конечной вершин
    cout << "Введите начальную вершину: "; // Вывод сообщения пользователю
    cin >> startPoint; // Считывание начальной вершины
    cout << "Введите конечную вершину: "; // Вывод сообщения пользователю
    cin >> endPoint; // Считывание конечной вершины
=======
>>>>>>> 03bdd7d4fbb473b5126b0de653c6b14a55cb8216

    vector<vector<ll>> dp(size_dp, vector<ll>(size_dp, 0)); // Создание матрицы dp
    cout << "Заполните матрицу: " << endl; // Вывод сообщения пользователю
    FOR(i, 0, size_dp) // Цикл для заполнения матрицы
        FOR(j, 0, size_dp) cin >> dp[i][j]; // Считывание элементов матрицы

<<<<<<< HEAD
=======
    int startPoint, endPoint; // Переменные для начальной и конечной вершин
    cout << "Введите начальную вершину: "; // Вывод сообщения пользователю
    cin >> startPoint; // Считывание начальной вершины
    cout << "Введите конечную вершину: "; // Вывод сообщения пользователю
    cin >> endPoint; // Считывание конечной вершины
>>>>>>> 03bdd7d4fbb473b5126b0de653c6b14a55cb8216

    vector<ll> dist, path; // Векторы для расстояний и пути

    dijkstra(dp, startPoint, endPoint, dist, path); // Вызов функции Dijkstra

    cout << "Кратчайший путь: "; // Вывод сообщения
    vector<ll> result; // Вектор для хранения кратчайшего пути
    for(ll i = endPoint; i != -1; i = path[i]) // Цикл для восстановления пути
    {
        result.push_back(i); // Добавление вершины в путь
    }
    for(ll i = result.size() - 1; i >= 0; i--) // Цикл для вывода пути в обратном порядке
    {
        cout << result[i] << " "; // Вывод вершины пути
    }
    cout << "\n"; // Переход на новую строку
    cout << "Длинна кратчайшего пути: " << dist[endPoint] << endl; // Вывод длины кратчайшего пути

    return 0; // Завершение программы с кодом возврата 0
}
