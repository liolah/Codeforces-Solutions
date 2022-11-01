#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s;
  cin >> s;
  char t = 'h';
  int count = 0;
  bool b = true;
  for (int i = 0;i < s.length();i++) {
    if (s[i] == t)
      count++;
    if (s[i] != t or i == s.length() - 1) {
      if (i == s.length() - 1) {
        count = s[i] == t ? count++ : 1;
        }
      if (!(count % 2 == 0 or count % 3 == 0 or ((count - 3) % 2 == 0 and count - 3 > 0) or ((count - 2) % 3 == 0 and count - 2 > 0))) {
        b = false;
        break;
        }
      t = s[i];
      count = 1;
      }
    }
  if (b)
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
