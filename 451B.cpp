#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, l = 0, r = 0;
  bool valid = true;
  cin >> n;
  int a[n];
  for (int i = 0;i < n;i++) cin >> a[i];
  for (int i = 1;i < n;i++) {
    if (l > 0 and r > 0 and a[i] < a[i - 1]) {
      valid = false;
      break;
      }
    if (a[i] < a[i - 1] and l == 0) {
      l = i;
      }
    if (a[i] > a[i - 1] and r == 0 and l > 0 or l > 0 and i == n - 1 and r == 0) {
      r = i + !(a[i] > a[i - 1]);
      }
    }

  if (r > 0 and valid)
    valid = !((a[l - 1] > a[r] and r <= n - 1 and l >= 1 or a[r - 1] < a[l - 2] and l > 1) and n > 2);

  if (valid)
    cout << "yes\n" << max(l, 1) << ' ' << max(r, 1);
  else
    cout << "no\n";

  return 0;
  }
