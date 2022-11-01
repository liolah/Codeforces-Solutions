#include <bits/stdc++.h>
using namespace std;

void solve() {
  int a, b;
  cin >> a >> b;
  if (a)
    cout << a + 2 * b + 1 << "\n";
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
