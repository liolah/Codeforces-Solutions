#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  bool p = true;
  int n, f, x, y;
  cin >> n >> f >> x >> y;
  for (int i = 0;i < n - 1;i++) {
    cin >> x >> y;
    if (x == f or y == f or 7 - x == f or 7 - y == f)
      p = false;
    }
  if (p)
    cout << "YES";
  else
    cout << "NO";

  return 0;
  }
