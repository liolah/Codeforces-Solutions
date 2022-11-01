#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  unsigned long long n, k, x, kids = 0;
  cin >> n >> k;
  char sign;
  for (int i = 0;i < n;i++) {
    cin >> sign >> x;
    if (sign == '+') {
      k += x;
      }
    else {
      if (k >= x)
        k -= x;
      else
        kids++;
      }
    }
  cout << k << " " << kids;

  return 0;
  }
