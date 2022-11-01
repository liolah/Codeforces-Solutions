#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s, x;
  cin >> s;
  for (int i = 0;i < s.length();i += 2) {
    x += s[i];
    }
  sort(begin(x), end(x));
  for (int i = 0;i < x.length();i++) {
    cout << x[i] << "+ "[i == x.length() - 1];
    }

  return 0;
  }
