#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  ll n, m;
  cin >> n >> m;
  cout << ((m * (m + 1)) / 2) + m * ((n * (n + 1) / 2) - 1) << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
