#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  int n;
  cin >> n;
  int a[n];
  bool p = true;
  for (int i = 0; i < n;i++) {
    cin >> a[i];
    if (a[i] < i) p = false;
  }
  int c = 0;
  if (p) {
    for (int i = n - 1; i > 0;i--) {
      while (a[i - 1] >= a[i]) {
        a[i - 1] /= 2;
        c++;
      }
      if (a[i - 1] < i - 1) {
        p = false;
        break;
      }
    }
  }
  if (p)
    cout << c << "\n";
  else
    cout << -1 << "\n";
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
