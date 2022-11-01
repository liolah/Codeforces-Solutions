#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, x, y;
  cin >> n;
  int a[n];
  for (int i = 0;i < n;i++) cin >> a[i];
  cin >> n;
  for (int i = 0;i < n;i++) {
    cin >> x >> y;
    if (x > 1) a[x - 2] += (y - 1);
    a[x] += (a[x - 1] - y);
    a[x - 1] = 0;
    }
  for (auto i : a) cout << i << "\n";



  return 0;
  }
