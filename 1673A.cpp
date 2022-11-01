#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s;
  cin >> s;
  int sum = 0;
  for (auto c : s) {
    sum += ((int)c - 96);
  }
  if (s.length() & 1) {
    if (s.length() == 1) {
      cout << "Bob" << "\t" << sum << "\n";
    }
    else {
      sum = s[0] > s[s.length() - 1] ? sum - 2*((int)s[s.length() - 1] - 96) : sum - 2*((int)s[0] - 96);
      cout << "Alice" << "\t" << sum << "\n";
    }
  }
  else {
    cout << "Alice" << "\t" << sum << "\n";
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
