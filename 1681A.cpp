#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, m;
  cin >> n;
  int a[n];
  for (int i = 0;i < n;i++) cin >> a[i];
  cin >> m;
  int b[m];
  for (int i = 0;i < m;i++) cin >> b[i];
  int x = *max_element(a, a + n);
  int y = *max_element(b, b + m);
  if (x > y) {
    cout << "Alice" << "\n" << "Alice" << "\n";
  }
  else if (x < y) {
    cout << "Bob" << "\n" << "Bob" << "\n";
  }
  else {
    cout << "Alice" << "\n" << "Bob" << "\n";
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
