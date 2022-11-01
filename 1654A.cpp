#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;

void solve() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0;i < n;i++) cin >> a[i];
  sort(a, a + n);
  cout << a[n - 1] + a[n - 2] << '\n';
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
