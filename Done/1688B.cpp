#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;
    int a[n];
    int e = 0, x = 0, z = 0, b = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (a[i] % 2 == 0)
        e++;
      z |= a[i];
    }
    if (e < n) { 
      x = e;
    }
    else {
      for (int i = 0; i < 32; i++) {
        if (!(z & (1 << i)))
          b++;
        else
          break;
      }
      x = b + n - 1;
    }
    cout << x << "\n";
  }
  return 0;
}
