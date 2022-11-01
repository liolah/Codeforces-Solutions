#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, s = 0, d = 0;
  bool turn = true;
  cin >> n;
  int a[n];
  for (int i = 0;i < n;i++) cin >> a[i];
  int l = 0, r = n - 1;
  while (l <= r) {
    if (turn) {
      if (a[l] > a[r]) {
        s += a[l];
        l++;
        }
      else {
        s += a[r];
        r--;
        }
        turn = false;
      }
    else {
      if (a[l] > a[r]) {
        d += a[l];
        l++;
        }
      else {
        d += a[r];
        r--;
        }
        turn = true;
      }
    }
  cout << s << "\t" << d;
  
  return 0;
  }
