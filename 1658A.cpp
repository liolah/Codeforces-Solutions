#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, ans = 0;
  string s;
  cin >> n >> s;
  if (n == 1) {
      cout << 0 << "\n";
    }
  else {
    for (int i = 0;i < n;i++) {
      if (s[i] == '0') {
        if (s[i + 1] == '0' and i < n - 1) ans += 2;
        else
          if (s[i + 2] == '0' and i < n - 2) ans++;
        }
      }
    cout << ans << "\n";
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
