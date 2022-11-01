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
    int z = n;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      z -= a[i];
    }
    int x = 0;
    for (int i = 1; i < n; i++) {
      z -= !a[i];
      if (!a[i] || (a[i] && !a[i - 1]) || (z > 0 && x > 0)) {
        x++;
      }
    }
    cout << x << '\n';
  }
  return 0;
}
