#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
#define f first
#define s second
#define pb push_back
#define mp make_pair 
#define lp(i,n) for (int i = 0;i < n;i++)
#define all(v) begin(v), end(v)
#define rall(v) rbegin(v), rend(v)
#define rv(v) for (auto& i : v) cin >> i;
#define rv2d(v) for (auto& i : v) rv(i);
#define pv(v) for (auto& i : v) cout << i << ' '; cout << '\n';

void solve() {
  int n;
  cin >> n;
  cout << n + 2 * (n / 2) + 2 * (n / 3);
  }

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    solve();
    cout << '\n';
    }

  return 0;
  }
