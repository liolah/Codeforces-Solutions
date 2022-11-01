#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  int a, b, c, x, y;
  cin >> a >> b >> c >> x >> y;
  if (a + b + c >= x + y and a + c >= x and b + c >= y)
    cout << "YES" << "\n";
  else
    cout << "NO" << "\n";
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
