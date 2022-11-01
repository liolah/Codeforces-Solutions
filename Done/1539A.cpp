#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int tc;
  cin >> tc;
  while (tc--) {
    ll n, x, t;
    cin >> n >> x >> t;
    cout << t / x * max((n - (t / x)), 0LL) + min(((t / x) * ((t / x) - 1)) / 2LL, (n * (n - 1)) / 2LL) << '\n';
    }
  return 0;
  }
