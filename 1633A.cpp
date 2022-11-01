#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  if (n % 10 >= n % 7)
    cout << n - (n % 7) << "\n";
  else
    cout << n + 7 - (n % 7) << "\n";
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
