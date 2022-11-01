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
#define lcm(a,b) (a)*(b)/__gcd(a,b)
#define rv(v) for (auto& i : v) cin >> i;
#define rv2d(v) for (auto& i : v) rv(i);
#define pv(v) for (auto& i : v) cout << i << ' '; cout << '\n';

void solve() {
  int n, m;
  string a, b;
  cin >> n >> m >> a >> b;
  if (a.substr(n - m + 1) == b.substr(1) and (count(all(a), '0') >= count(all(b), '0') and b[0] == '0' or count(all(a), '1') >= count(all(b), '1') and b[0] == '1'))
    cout << "YES";
  else
    cout << "NO";
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
