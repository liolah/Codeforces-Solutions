#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;
  if (n == 1 and m == 1)
    cout << 0 << "\n";
  else if (n == 1 and m < 3 or m == 1 and n < 3)
    cout << 1 << "\n";
  else if (n == 1 or m == 1)
    cout << -1 << "\n";
  else if (n == m)
    cout << 2 * (n - 1) << "\n";
  else if (n > m)
    cout << (m - 1) * 2 + ((n - m) / 2) * 4 + ((n - m) % 2) * 1 << "\n";
  else if (m > n)
    cout << (n - 1) * 2 + ((m - n) / 2) * 4 + ((m - n) % 2) * 1 << "\n";
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
