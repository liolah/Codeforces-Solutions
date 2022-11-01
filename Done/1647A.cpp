#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  if (n == 1)
    cout << 1 << "\n";
  else if (n == 2)
    cout << 2 << "\n";
  else {
    string s;
    if (n % 3 == 1)s = "1";
    for (int i = 0;i < n / 3;i++) s += "21";
    if (n % 3 == 2)s += "2";
    cout << s << "\n";
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
