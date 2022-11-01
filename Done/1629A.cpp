#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  int a[n], b[n];
  bool done = false;
  for (int i = 0;i < n;i++) cin >> a[i];
  for (int i = 0;i < n;i++) cin >> b[i];
  while (!done)
    for (int i = 0;i < n;i++) {
      if (i == 0) done = true;
      if (a[i] <= k and a[i] != 0) {
        k += b[i];
        a[i] = 0;
        done = false;
        }
      }
  cout << k << "\n";
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
