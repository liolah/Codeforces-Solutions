#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  int n, z;
  cin >> n >> z;
  int a[n];
  int s = 0;
  for (int i = 0;i < n;i++) {
    cin >> a[i];
    s = max(s, a[i] | z);
  }
  cout << s << "\n";
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
