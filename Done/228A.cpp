#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // int a[4];
  // int ans = 3;
  // cin >> a[0] >> a[1] >> a[2] >> a[3];
  // sort(a, a + 4);
  // for (int i = 1;i < 4;i++) if (a[i] != a[i - 1]) ans--;
  // cout << ans;

  int a[4];
  int ans = 3;
  cin >> a[0] >> a[1] >> a[2] >> a[3];
  unordered_set<int> s(a, a + 4);
  cout << 4 - s.size();

  return 0;
  }
