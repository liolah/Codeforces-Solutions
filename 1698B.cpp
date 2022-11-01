#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;

void solve() {
  int n, k, p = 0;
  cin >> n >> k;
  int a[n];
  for (int i = 0;i < n;i++) cin >> a[i];
  if (k == 1)
    cout << (n - 1) / 2 << '\n';
  else {
    for (int i = 1;i < n - 1;i++) {
      if (a[i] > a[i - 1] + a[i + 1])
        p++;
      }
    cout << p << '\n';
    }
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
