#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  unsigned long long n, k;
  cin >> n >> k;
  if (k > (n + 1) / 2)
    cout << 2 * (k - (n + 1) / 2);
  else
    cout << 2 * k - 1;

  return 0;
  }
