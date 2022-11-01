#include <bits/stdc++.h>
using namespace std;

void solve() {
  int z, o;
  cin >> z >> o;
  string s;
  while (z > 0 || o > 0) {
    if (z > 0) {
      s += '0';
      z--;
    }
    if (o > 0) {
      s += '1';
      o--;
    }
  }
  cout << s << "\n";
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
