#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string a, b;
  cin >> a >> b;
  if (a != b)
    cout << max(a.length(), b.length());
  else
    cout << -1;

  return 0;
  }
