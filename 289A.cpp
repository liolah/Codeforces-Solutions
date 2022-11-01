#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, k, x, y, value = 0;
  cin >> n >> k;
  for (int i = 0;i < n;i++) {
    cin >> x >> y;
    value += (y - x + 1);
    }
  int ans = value % k ? k - value % k : 0;
  cout << ans;

  return 0;
  }
