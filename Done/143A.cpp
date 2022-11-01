#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int r1, r2, c1, c2, d1, d2, a, b, c, d;
  bool valid = false;
  cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
  for (int i = 1;i <= 9;i++) {
    a = i;
    b = r1 - a;
    c = c1 - a;
    d = r2 - c;
    if (b + d == c2 and a + d == d1 and c + b == d2 and a != b and b != c and c != d and d != a and a != c and b != d and a <= 9 and b <= 9 and c <= 9 and d <= 9 and a > 0 and b > 0 and c > 0 and d > 0) {
      valid = true;
      break;
      }
    }
  if (valid)
    cout << a << " " << b << "\n" << c << " " << d;
  else
    cout << -1;


  return 0;
  }
