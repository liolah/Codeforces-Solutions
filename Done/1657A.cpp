#include <bits/stdc++.h>
using namespace std;

void solve() {
  int x, y;
  cin >> x >> y;
  if (x == 0 and y == 0)
    cout << 0 << "\n";
  else if (ceil(sqrt(x * x + y * y)) != floor(sqrt(x * x + y * y)))
    cout << 2 << "\n";
  else
    cout << 1 << "\n";
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
