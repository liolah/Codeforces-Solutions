#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, ans = 0;
  cin >> n;
  int a[n];
  for (int i = 0;i < n;i++) {
    cin >> a[i];
    }
  if (n > 1) {
    int x = -1, y = n, alice = 0, bob = 0;
    while (x < y) {
      if (alice > bob) {
        y--;
        bob += a[y];
        }
      else if (bob > alice) {
        x++;
        alice += a[x];
        }
      else {
        ans = x + 1 + n - y;
        x++;
        alice += a[x];
        }
      }
    }
  cout << ans << "\n";
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
