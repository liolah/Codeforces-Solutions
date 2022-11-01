#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;
  string s[n];
  int pos;
  int u{ -1 }, l{ INT_MAX };
  bool p{ false };
  int ls[n];
  memset(ls, -1, sizeof(ls));
  for (int i = 0; i < n;i++) {
    cin >> s[i];
    pos = s[i].find('R');
    if (pos != string::npos) {
      if (u == -1)
        u = i;
      ls[i] = pos;
      l = min(l, pos);
    }
  }
  if (n == 1) {
    p = true;
  }
  else {
    for (int i = 0;i <= u;i++) {
      if (ls[i] <= l && ls[i] >= 0) {
        p = true;
        break;
      }
    }
  }
  if (p)
    cout << "YES" << "\n";
  else
    cout << "NO" << "\n";
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
