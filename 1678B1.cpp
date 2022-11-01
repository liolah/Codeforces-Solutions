#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  int l;
  string s;
  cin >> l >> s;
  vector<int> v;
  int count = 0;
  char x = s[0];
  for (int i = 0;i < l;i++) {
    if (s[i] == x) {
      count++;
    }
    else {
      v.push_back(count % 2);
      x = s[i];
      count = 1;
    }
  }
  v.push_back(count % 2);
  int ans = 0;
  for (int i = 1;i < v.size();i++) {
    if (v[i - 1] == 1) {
      v[i] ^= v[i - 1];
      ans++;
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
