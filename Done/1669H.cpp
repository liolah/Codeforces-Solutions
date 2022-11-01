#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, k, ans = 0;
  cin >> n >> k;
  int a[n];
  int bits[31]{ 0 };
  for (int i = 0;i < n;i++) {
    cin >> a[i];
    for (int j = 0;j < 31;j++) {
      bits[j] += (int)((a[i] & (1 << j)) > 0);
      }
    }
  for (int i = 30;i >= 0;i--) {
    if (n - bits[i] <= k) {
      ans |= (1 << i);
      k -= (n - bits[i]);
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
