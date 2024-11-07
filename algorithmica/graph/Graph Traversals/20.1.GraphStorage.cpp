#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <stack>
#include <cmath>
#include <numeric>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()

const ll N = 2e5 + 7, mod = 1e9 + 9;

vector<ll> g[N];

void solve()
{
       int n, m;
       cin >> n >> m;
       ll a;
       /* из матрицы в список смежности
       for(int i = 0; i < n; i++){
              for(int j = 0; j < n; j++){
                     cin >> a;
                     if(a){
                            g[i].pb(j);
                            g[j].pb(i);
                     }
              }
       }

       for(int i = 0; i < n; i++){
              cout << i << ": ";
              for(auto j : g[i]){
                     cout << j << " ";
              }
              cout << endl;
       }
       */

       // из списка ребер в список смежности
       ll v1, v2;
       for(int i = 0; i < m; i++){
              cin >> v1 >> v2;
              g[v1 - 1].pb(v2 - 1);
              g[v2 - 1].pb(v1 - 1);
       }

       for(int i = 0; i < m; i++){
              cout << i << ": ";
              for(auto j : g[i]){
                     cout << j << " ";
              }
              cout << endl;
       }
}

signed main()
{
       ios::sync_with_stdio(false);
       cin.tie(0);
       cout.tie(0);
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();

       return 0;

}
