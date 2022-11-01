#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  int a[n];
  int s = -n;
  for (int i = 0;i < n;i++) {
    cin >> a[i];
    s += a[i];
  }
  if (s & 1)
    cout << "errorgorn" << "\n";
  else
    cout << "maomao90" << "\n";
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
