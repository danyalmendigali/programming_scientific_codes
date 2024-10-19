#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <numeric>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()
#define Fast_Code ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define cl clear
#define ins insert
#define ers erase
#define pii pair <int, int>
#define pll pair<long long, long long>
#define tostr(x) to_string(x)
#define tonum(s) stoi(s)
#define fxd(x) fixed << setprecision(x)


int find_kth(vector<int>& num, int a, int b, int k)
{
       if(a == b) return num[a];

       int i = a;
       int j = b;
       int md = num[(a + b) / 2];

       while (i <= j){
              while(num[i] < md) i++;
              while(num[j] > md) j--;

              if(i <= j){
                    swap(num[i], num[j]);
                    i++;
                    j--;
              }
       }

       if(k <= j - a + 1){
              return find_kth(num, a, j, k);
       }
       else{
              return find_kth(num, i, b, k - (i - a));
       }
}


void solve()
{
       int n, k; cin >> n >> k;
       vector<int> a(n);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }

       cout << find_kth(a, 0, n - 1, k) << endl;


}


signed main()
{
       Fast_Code;
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();


       return 0;
}
