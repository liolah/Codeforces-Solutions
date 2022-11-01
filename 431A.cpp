#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int a[4];
  int ans = 0;
  string s;
  cin >> a[0] >> a[1] >> a[2] >> a[3] >> s;
  for (char c : s) ans += a[c-49];
  cout << ans;

  return 0;
  }
