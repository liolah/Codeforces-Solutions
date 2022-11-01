#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  long long n;
  cin >> n;
  if (n & 1 || n < 4)
    cout << -1 << "\n";
  else {
    cout << n / 6 + (n % 6 + 2) / 4 << '\t' << n / 4 << '\n';
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
