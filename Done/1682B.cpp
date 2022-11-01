#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, x = INT_MAX,a;
  cin >> n;
  for (int i = 0;i < n;i++) {
    cin >> a;
    if (a != i)
      x &= a;
    }
  cout << x << "\n";
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
