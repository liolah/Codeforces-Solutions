#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;

void solve() {
  int n, x = 1;
  cin >> n;
  if (n < 20) {
    cout << "YES\n";
    for (int i = 0;i < n;i++) {
      cout << x << ' ';
      x *= 3;
      }
    cout << '\n';
    }
  else
    cout << "NO\n";
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
