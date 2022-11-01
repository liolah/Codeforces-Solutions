#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m, q, l, r;
  cin >> n;
  ll a[n], b[n];
  for (int i = 0;i < n;i++) {
    cin >> a[i];
    b[i] = a[i];
    }
  sort(b, b + n);
  for (int i = 1;i < n;i++) {
    a[i] += a[i - 1];
    b[i] += b[i - 1];
    }
  cin >> m;
  while (m--) {
    cin >> q >> l >> r;
    if (q == 1)
      cout << a[r - 1] - (int)(l > 1) * a[(int)(l > 1) * (l - 2)] << '\n';
    else
      cout << b[r - 1] - (int)(l > 1) * b[(int)(l > 1) * (l - 2)] << '\n';
    }

  return 0;
  }
