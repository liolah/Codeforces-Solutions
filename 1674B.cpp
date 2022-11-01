#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s;
  cin >> s;
  int index = ((int)s[0] - 97) * 25;
  if (s[1] > s[0])
    index = index + ((int)s[1] - 97);
  else
    index = index + ((int)s[1] - 96);
  cout << index << "\n";
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
