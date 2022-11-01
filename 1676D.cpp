#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;
  int a[n][m];
  for (int i = 0;i < n;i++) {
    for (int j = 0;j < m;j++) {
      cin >> a[i][j];
    }
  }
  int diag_1[n + m - 1]{ 0 };
  int diag_2[n + m - 1]{ 0 };
  for (int i = 0;i < n;i++) {
    for (int j = 0;j < m;j++) {
      diag_1[i + j] += a[i][j];
      diag_2[i + m - j - 1] += a[i][j];
    }
  }
  int best = 0;
  for (int i = 0;i < n;i++) {
    for (int j = 0;j < m;j++) {
      best = max(best, diag_1[i + j] + diag_2[i + m - j - 1] - a[i][j]);
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
