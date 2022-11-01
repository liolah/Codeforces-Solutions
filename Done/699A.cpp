#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m = INT_MAX;
  string d;
  cin >> n >> d;
  int a[n];
  for (int i = 0;i < n;i++) cin >> a[i];
  for (int i = 0;i < d.length();i++) {
    if (d[i] == 'R' and d[i + 1] == 'L' and i < d.length() - 1) {
      m = min(m, (a[i + 1] - a[i]) / 2);
      }
    }
  if (m < INT_MAX)
    cout << m;
  else
    cout << -1;

  return 0;
  }
