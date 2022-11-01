#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  ll n, B, x, y, sum = 0, prev = 0;
  cin >> n >> B >> x >> y;
  for (int i = 0;i < n;i++) {
    if (prev + x <= B) {
      prev += x;
      sum += prev;
      }
    else {
      prev -= y;
      sum += prev;
      }
    }
  cout << sum << "\n";
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
