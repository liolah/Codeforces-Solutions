#include <bits/stdc++.h>
using namespace std;

void solve() {
  int l[26]{ 0 };
  string s, ans = "";
  int max_count = 0;
  cin >> s;
  for (auto c : s) {
    l[c - 97]++;
    max_count = max(max_count, l[c - 97]);
  }
  if (max_count == 2) {
    for (int i = 0;i < 26;i++) {
      if (l[i] == 2) {
        ans += (char)(i + 97);
        l[i] = 0;
      }
    }
    ans += ans;
    for (int i = 0;i < 26;i++) {
      if (l[i]) {
        ans += (char)(i + 97);
      }
    }
    cout << ans << "\n";
  }
  else
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
