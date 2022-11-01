#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s;
  cin >> s;
  int x;
  if (s.length() < 3)
    x = s[1] - 48;
  else
    x = *min_element(begin(s), end(s)) - 48;
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
