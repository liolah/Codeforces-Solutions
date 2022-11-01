#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  int a[n], b[n];
  for (int i = 0;i < n;i++) cin >> a[i];
  for (int i = 0;i < n;i++) cin >> b[i];
  for (int i = 0;i < n;i++) if (a[i] > b[i]) swap(a[i], b[i]);
  cout << *max_element(a, a + n) * *max_element(b, b + n) << "\n";
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
