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

const ll N = 1e9;
const ll inf = 1e9 + 9;
const ll mod = 1e9 + 7;

<<<<<<< HEAD

=======
>>>>>>> 03bdd7d4fbb473b5126b0de653c6b14a55cb8216
pair<vector<ll>, ll> spfa(ll size_dp, const vector<vector<ll>>& dp, ll startPoint, ll endPoint)
{
    vll dist(size_dp, inf);
    vector<bool> inQueue(size_dp, false);
    vll pred(size_dp, -1);
    vll count(size_dp, 0);

    dist[startPoint] = 0;
    queue<ll> q;
    q.push(startPoint);
    inQueue[startPoint] = true;

    while (!q.empty())
    {
        ll numFront = q.front();
        q.pop();
        inQueue[numFront] = false;

        FOR(i, 0, size_dp)
        {
            if (dp[numFront][i] != 0 && dist[numFront] + dp[numFront][i] < dist[i])
            {
                dist[i] = dist[numFront] + dp[numFront][i];
                pred[i] = numFront;
                if (!inQueue[i])
                {
                    q.push(i);
                    inQueue[i] = true;
                    count[i]++;
                    if (count[i] >= size_dp)
                    {
                        cout << "Граф имеет цикл отрицательного веса" << endl;
                        exit(0);
                    }
                }
            }
        }
    }

    vector<ll> path;
    for (ll i = endPoint; i != -1; i = pred[i])
        path.pb(i);

    reverse(all(path));

    return {path, dist[endPoint]};
}

signed main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    optimus_prime;

    int size_dp;
    cout << "Введите размер матрицы: ";
    cin >> size_dp;

    vector<vector<ll>> dp(size_dp, vll(size_dp));
    cout << "Введите матрицу: " << endl;
    FOR(i, 0, size_dp)
    FOR(j, 0, size_dp) cin >> dp[i][j];

    int startPoint, endPoint;
    cout << "Введите начальную вершину: ";
    cin >> startPoint;

    cout << "Введите конечную вершину: ";
    cin >> endPoint;

    pair<vector<ll>, ll> result = spfa(size_dp, dp, startPoint, endPoint);

    cout << "Кратчайший путь: ";
    for (ll num : result.F)
    {
        cout << num << " ";
    }
    cout << endl;
    cout << "Кратчайший путь: " << result.S << "\n";

    return 0;
}
