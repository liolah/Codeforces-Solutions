#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    sort(a, a + n, greater<int>());
    if ((n == 1 && a[0] < 2) || (n > 1 && a[0] - a[1] < 2))
      cout << "YES" << '\n';
    else
      cout << "NO" << '\n';
  }
  return 0;
}
