#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;
  int a[n][m];
  int x, y;
  int h = INT_MIN;
  for (int i = 0;i < n;i++) {
    for (int j = 0; j < m;j++) {
      cin >> a[i][j];
      if (a[i][j] > h) {
        h = a[i][j];
        x = j;
        y = i;
      }
    }
  }
  cout << max(x + 1, m - x) * max(y + 1, n - y) << "\n";
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
