#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, x, y, z, ans = 0;
  cin >> n;
  for (int i = 0;i < n;i++) {
    cin >> x >> y >> z;
    if (x + y + z > 1)
      ans++;
    }
  cout << ans;

  return 0;
  }
