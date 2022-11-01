#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, neg = 0;
  bool v = true;
  cin >> n;
  int a[n];
  for (int i = 0;i < n;i++) {
    cin >> a[i];
    if (a[i] < 0) {
      a[i] = -a[i];
      a[neg] = -a[neg];
      neg++;
      }
    }

  for (int i = 1;i < n;i++) {
    if (a[i] < a[i - 1]) v = false;
    }

  if (v)
    cout << "YES" << "\n";
  else
    cout << "NO" << "\n";
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
