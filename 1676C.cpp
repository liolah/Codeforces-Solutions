#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;
  string a[n];
  for (int i = 0;i < n;i++) {
    cin >> a[i];
  }
  int best = INT_MAX;
  int x;
  for (int i = 0;i < n - 1;i++) {
    for (int j = i + 1;j < n;j++) {
      x = 0;
      for (int k = 0;k < m;k++) {
        x += abs(a[i][k] - a[j][k]);
      }
      best = min(best, x);
    }
  }
  cout << best << "\n";
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
