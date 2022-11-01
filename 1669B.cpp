#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, ans = -1, count = 0, t = -1;
  cin >> n;
  int a[n];
  for (int i = 0;i < n;i++) {
    cin >> a[i];
    }
  sort(a, a + n);
  for (int i = 0;i < n;i++) {
    if (a[i] == t)
      count++;
    if (a[i] != t or i == n - 1) {
      if (count > 2) {
        ans = t;
        }
      t = a[i];
      count = 1;
      }
    }
  cout << ans << "\n";

  // int n, ans = -1;
  // cin >> n;
  // int a[n];
  // for (int i = 0;i < n;i++) {
  //   cin >> a[i];
  //   }
  // unordered_multiset<int> x(a, a + n);
  // for (auto i : x) {
  //   if (x.count(i) > 2) {
  //     ans = i;
  //     break;
  //     }
  //   }
  // cout << ans << "\n";
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
