#include <bits/stdc++.h>
using namespace std;

void solve() {
  int x, y;
  cin >> x >> y;
  if (x > y or y % x)
    cout << 0 << "\t" << 0 << "\n";
  else
    cout << 1 << "\t" << y / x << "\n";
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
