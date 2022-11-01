#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  cin >> s;
  int ans = min(s[0] - 'a', 'z' - s[0] + 1);
  for (int i = 1;i < s.length();i++) {
    ans += min(abs(s[i] - s[i - 1]), min('z' - s[i] + s[i - 1] - 'a' + 1, 'z' - s[i - 1] + s[i] - 'a' + 1));
    }
  cout << ans;

  return 0;
  }
