#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  string s;
  bool v = true, r = true, b = true;
  cin >> n >> s;
  for (int i = 0; i < n;i++) {
    if ((s[i] == 'R' or s[i] == 'B') and v) v = r = b = false;
    if (s[i] == 'R') r = true;
    if (s[i] == 'B') b = true;
    if (s[i] == 'W' or i == n - 1) {
      v = r and b;
      if (!v) break;
      }
    }
  if (v)
    cout << "YES" << '\n';
  else
    cout << "NO" << '\n';
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
