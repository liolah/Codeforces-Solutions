#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m, t;
  unsigned long long v = 0, p = 0;
  cin >> n;
  int a[n];
  int index[n + 1];
  for (int i = 0;i < n;i++) {
    cin >> a[i];
    index[a[i]] = i;
    }
  cin >> m;
  int q[m];
  for (int i = 0;i < m;i++) {
    cin >> q[i];
    v += index[q[i]] + 1;
    p += n - index[q[i]];
    }
  cout << v << " " << p;

  return 0;
  }
