#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  unsigned long long n, m, a;
  cin >> n >> m >> a;
  cout << ((n + a - 1) / a) * ((m + a - 1) / a);

  return 0;
  }
