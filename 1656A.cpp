#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0;i < n;i++) cin >> a[i];
  cout << min_element(a, a + n) - a + 1 << "\t" << max_element(a, a + n) - a + 1 << "\n";

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
