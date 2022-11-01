#include <bits/stdc++.h>
using namespace std;

void solve() {
  int l, r, k;
  cin >> l >> r >> k;
  if (l == r and l != 1)
    cout << "YES" << "\n";
  else if (l & 1 and ((!((r - l) & 1) and k > (r - l) / 2) or (((r - l) & 1) and k > (r - l) / 2)))
    cout << "YES" << "\n";
  else if (!(l & 1) and ((!((r - l) & 1) and k >= (r - l) / 2) or (((r - l) & 1) and k > (r - l) / 2)))
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
