#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s;
  cin >> s;
  int ones = count(begin(s), end(s), '1'), zeros = count(begin(s), end(s), '0');
  if (s.length() < 3 or s.length() == ones or s.length() == zeros)
    cout << 0 << "\n";
  else if (ones != zeros)
    cout << min(ones, zeros) << "\n";
  else
    cout << ones - 1 << "\n";
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
