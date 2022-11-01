#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t, n;
  cin >> n >> t;
  long long a[n];
  for (auto& x : a) {
    cin >> x;
  }
  sort(a, a + n, greater<int>());
  for (int i = 1; i < n;i++) {
    a[i] += a[i - 1];
  }
  int x, y;
  long long res;
  while (t--) {
    cin >> x >> y;
    res = x == y ? a[x - 1] : a[x - 1] - a[x - y - 1];
    cout << res << "\n";
  }
  return 0;
}
