#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int a, b, ans = 1;;
  cin >> a >> b;
  while ((a * ans) % 10 != b and (a * ans) % 10 != 0) ans++;
  cout << ans;

  return 0;
  }
