#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int l;
    string x;
    cin >> l >> x;
    if (l == 1 || (l == 2 && x[0] != x[1])) {
      cout << "YES" << '\n';
    }
    else {
      cout << "NO" << '\n';
    }
  }
  return 0;
}
