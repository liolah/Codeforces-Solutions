#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  unsigned long long l, r;
  cin >> l >> r;
  if ((r - l < 3 and l & 1) or (r - l < 2 and !(l & 1)))
    cout << -1;
  else if (l & 1)
    cout << l + 1 << " " << l + 2 << " " << l + 3;
  else
    cout << l << " " << l + 1 << " " << l + 2;

  return 0;
  }
