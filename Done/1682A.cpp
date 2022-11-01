#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int l;
    string x;
    cin >> l >> x;
    int s = 0;
    if (l == 2) {
      s = 2;
    }
    else {
      if (l % 2) {
        s++;
        for (int i = (l / 2) - 1; i >= 0; i--) {
          if (x[i] == x[i + 1]) {
            s += 2;
          }
          else
            break;
        }
      }
      else {
        for (int i = l / 2; i >= 0; i--) {
          if (x[i] == x[i - 1]) {
            s += 2;
          }
          else
            break;
        }
      }
    }
    cout << s << "\n";
  }
  return 0;
}
