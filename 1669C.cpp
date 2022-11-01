#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  bool oo = false, oe = false, eo = false, ee = false;
  cin >> n;
  int a[n];
  for (int i = 0;i < n;i++) {
    cin >> a[i];
    if (i & 1) {
      if (a[i] & 1)
        oo = true;
      else
        oe = true;
      }
    else {
      if (a[i] & 1)
        eo = true;
      else
        ee = true;
      }
    }
  if ((oo xor oe) and (eo xor ee))
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
