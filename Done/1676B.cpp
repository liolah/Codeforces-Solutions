#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  int a[n];
  int sum = 0;
  int x = INT_MAX;
  for (int i = 0;i < n;i++) {
    cin >> a[i];
    sum += a[i];
    x = min(x, a[i]);
  }
  cout << sum - n * x << "\n";
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
