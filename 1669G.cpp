#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, m, e = -1;
  cin >> n >> m;
  char object[n][m];
  for (int i = 0;i < n;i++) {
    for (int j = 0;j < m;j++) {
      cin >> object[i][j];
      }
    }
  // cout << "\n";
  for (int x = 0;x < m;x++) {
    e = -1;
    for (int y = n - 1;y >= 0;y--) {
      if (object[y][x] == '.') e = max(e, y);
      if (object[y][x] == 'o') e = -1;
      if (object[y][x] == '*') {
        if (e >= 0) {
          swap(object[y][x], object[e][x]);
          e--;
          }
        }
      }
    }

  for (int i = 0;i < n;i++) {
    for (int j = 0;j < m;j++) {
      cout << object[i][j];
      }
    cout << "\n";
    }
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
