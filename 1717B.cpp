#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, k, r, c, x, v;
  cin >> n >> k >> r >> c;

  x = (c + r - 2) % k;

  for (int i = 0;i < n;i++) {
    for (int j = 0;j < n;j++) {
      if (j >= x and (j - x) % k == 0)
        cout << 'X';
      else
        cout << '.';
      }
    x = (x - 1 + n) % k;
    cout << '\n';
    }
  }

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    solve();
    }

  return 0;
  }
