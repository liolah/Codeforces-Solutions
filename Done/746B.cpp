#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s, x;
  int l;
  cin >> l >> s;
  for (int i = 0;i < l;i++) {
    if (l & 1 and i & 1 or !(l & 1) and !(i & 1)) {
      x = s[i] + x;
      }
    else {
      x = x + s[i];
      }
    }
  cout << x;

  return 0;
  }
