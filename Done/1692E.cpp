#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, s, sum = 0;
  cin >> n >> s;
  int a[n];
  vector<int> v;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i]) {
      sum += a[i];
      v.push_back(i + 1);
    }
  }
  if (sum > s) {
    int best = v[s] - 1;
    for (int i = s;i < v.size() - 1;i++) {
      best = max(best, v[i + 1] - v[i - s] - 1);
    }
    best = max(best, n - v[v.size() - 1] + v[v.size() - 1] - v[v.size() - 1 - s]);
    cout << n - best << "\n";
  }
  else if (sum < s)
    cout << -1 << "\n";
  else
    cout << 0 << "\n";
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
