#include <bits/stdc++.h>
using namespace std;

void solve() {
  char x;
  string s;
  cin >> s >> x;
  bool v = false;
  int p = s.find(x);
  while (p != string::npos)
    if (p % 2 == 0) {
      v = true;
      break;
      }
    else {
      p = s.find(x, p + 1);
      }
  if (v)
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
