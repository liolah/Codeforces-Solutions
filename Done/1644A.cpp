#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s;
  cin >> s;
  bool red_key = false, blue_key = false, green_key = false, v = true;
  for (auto c : s) {
    if (c == 'r') red_key = true;
    if (c == 'g') blue_key = true;
    if (c == 'b') green_key = true;
    if (c == 'R' and !red_key) {
      v = false;
      break;
      }
    if (c == 'G' and !blue_key) {
      v = false;
      break;
      }
    if (c == 'B' and !green_key) {
      v = false;
      break;
      }
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
