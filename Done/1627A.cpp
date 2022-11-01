#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, m, r, c;
  cin >> n >> m >> r >> c;
  string s[n];
  bool zero = false, one = false, two = false;
  for (int i = 0;i < n;i++) {
    cin >> s[i];
    if (s[i][c - 1] == 'B' or s[r - 1].find('B') != string::npos) one = true;
    if (s[i].find('B') != string::npos) two = true;
    }
  zero = s[r - 1][c - 1] == 'B';
  if (zero)
    cout << 0 << "\n";
  else if (one)
    cout << 1 << "\n";
  else if (two)
    cout << 2 << "\n";
  else
    cout << -1 << "\n";
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
