#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int x, ans;
  for (int i = 0;i < 25;i++) {
    cin >> x;
    if (x == 1) ans = i;
    }
  cout << abs((ans % 5) - 2) + abs((ans / 5) - 2);

  return 0;
  }
