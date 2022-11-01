#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

void solve() {
  int n;
  cin >> n;
  ull sum = 0;
  ull a[n], b[n];
  for (int i = 0;i < n;i++)cin >> a[i];
  for (int i = 0;i < n;i++)cin >> b[i];
  for (int i = 0;i < n;i++) {
    if (a[i] > b[i]) swap(a[i], b[i]);
    }
  for (int i = 0;i < n - 1;i++) sum += llabs(a[i] - a[i + 1]);
  for (int i = 0;i < n - 1;i++) sum += llabs(b[i] - b[i + 1]);
  cout << sum << "\n";
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
