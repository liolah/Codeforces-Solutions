#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vii;

void solve() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0;i < n;i++) cin >> a[i];
  sort(a, a + n);
  int x = 1, y = n - 1;
  ll sumb = a[0] + a[1], sumr = a[n - 1];
  while (x < y) {
    if (sumr > sumb and n - y < x + 1) {
      cout << "YES\n";
      return;
      }
    if (sumr > sumb) {
      x++;
      sumb += a[x];
      }
    else {
      y--;
      sumr += a[y];
      }
    }
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
