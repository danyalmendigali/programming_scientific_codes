#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(); cout.tie(0);

using namespace std;


void solve()
{
       int n, m; cin >> n >> m;
       vector<int> a(n), b(m);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       for(int i = 0; i < m; i++){
              cin >> b[i];
       }

       for(int j = 0; j < m; j++){
              int cnt = 0;
              for(int i = 0; i < n; i++){
                     if(a[i] < b[j]){
                            cnt++;
                     }
                     else{
                            break;
                     }
              }

              cout << cnt << " ";
       }
       cout << endl;


}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();




    return 0;
}
