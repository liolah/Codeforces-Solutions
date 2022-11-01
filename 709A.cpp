#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, b, d, t = 0, s = 0, x;
  cin >> n >> b >> d;
  for (int i = 0;i < n;i++) {
    cin >> x;
    if (x <= b) s += x;
    if (s > d) {
      t++;
      s = 0;
      }
    }
  cout << t;

  return 0;
  }
