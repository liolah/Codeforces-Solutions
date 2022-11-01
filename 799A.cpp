#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  //* YUK!
  int n, t, k, d;
  cin >> n >> t >> k >> d;
  if ((n - 1) / k * t <= d)
    cout << "NO";
  else
    cout << "YES";

  return 0;
  }
