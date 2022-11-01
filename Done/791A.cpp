#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int a, b, ans = 0;
  cin >> a >> b;
  while (a * pow(3, ans) <= b * pow(2, ans)) ans++;
  cout << ans;

  return 0;
  }
