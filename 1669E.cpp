#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

void solve() {
  int n;
  cin >> n;
  string t;
  ull ans = 0;
  ull s[11][11]{ 0 };
  for (int i = 0;i < n;i++) {
    cin >> t;
    s[t[0] - 'a'][t[1] - 'a']++;
    }
  for (int i = 0;i < 11;i++) {
    for (int j = 0;j < 11;j++) {
      for (int y = i + 1;y < 11;y++) {
        ans += (s[i][j] * s[y][j]);
        }
      for (int x = j + 1;x < 11;x++) {
        ans += (s[i][j] * s[i][x]);
        }
      }
    }
  cout << ans << "\n";
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
