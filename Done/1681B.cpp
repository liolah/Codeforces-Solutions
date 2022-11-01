#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
  int n, m;
  ll sum{ 0 };
  cin >> n;
  ll a[n];
  for (int i = 0;i < n;i++) cin >> a[i];
  cin >> m;
  ll b[m];
  for (int i = 0;i < m;i++) {
    cin >> b[i];
    sum += b[i];
  }
  sum %= n;
  cout << a[sum] << "\n";
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
