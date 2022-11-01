#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  int n;
  cin >> n;
  int a[n];
  bool s = false, p = false; //*
  int z = 0;
  for (int i = 0;i < n;i++) {
    cin >> a[i];
  }
  for (int i = 0;i < n;i++) {
    if (a[i - 1] > 0 and a[i] == 0 and i > 0) p = true;
    if (a[i + 1] > 0 and a[i] == 0 and i < n - 1 and p) s = true;
    z |= a[i];
  }
  if (z == 0)
    cout << 0 << "\n";
  else if (s)
    cout << 2 << "\n";
  else
    cout << 1 << "\n";
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
