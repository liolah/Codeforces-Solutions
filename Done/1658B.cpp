#include <bits/stdc++.h>
#define mod 998244353
using namespace std;
typedef unsigned long long ull;

ull powerMod(int n) {
  ull ans = 1;
  for (int i = 1;i < n + 1;i++) {
    ans = (ans * i) % mod;
    }
  ans = (ans * ans) % mod;
  return ans;
  }

void solve() {
  int n;
  cin >> n;

  if (n & 1)
    cout << 0 << "\n";
  else
    cout << powerMod(n / 2) << "\n";
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
