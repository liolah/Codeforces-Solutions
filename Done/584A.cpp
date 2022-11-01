#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, t;
  cin >> n >> t;
  if (t == 10)
    if (n > 1)
      cout << "1" + string(n - 1, '0');
    else
      cout << -1;
  else
    cout << string(n, '0' + t);

  return 0;
  }
