#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vii;

void solve() {
  ll n, k;
  cin >> n >> k;
  if (n % k == 0 and k <= n) cout << 1;
  else if (k < n) cout << 2;
  else cout << k / n + (int)(k % n > 0);
  }

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    solve();
    cout << '\n';
    }

  return 0;
  }
