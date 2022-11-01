#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int x;
    cin >> x;
    int a = 0, b = 0, c = 0, d = 0;
    bool aset = false, bset = false;
    for (int i = 0; i < 31; i++) {
      c = x & (1 << i);
      if (c && !aset) {
        a = i;
        aset = true;
      }
      if (!c && !bset) {
        b = i;
        bset = true;
      }
      if (c)
        d++;
    }
    int s = d == 1 ? (1 << a) | (1 << b) : (1 << a);
    cout << s << "\n";
  }
  return 0;
}
