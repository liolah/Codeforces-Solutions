#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    string x;
    cin >> x;
    int l = x.length();
    int ans = -1;
    while (true) {
      if ((static_cast<int>(x[l - 1]) - 48) % 2 == 0) {
        ans = 0;
        break;
      }
      if ((static_cast<int>(x[0]) - 48) % 2 == 0) {
        ans = 1;
        break;
      }
      for (int i = l - 2; i > 0; i--) {
        if ((static_cast<int>(x[i]) - 48) % 2 == 0) {
          ans = 2;
          break;
        }
      }
      break;
    }
  cout << ans << "\n";
  }
return 0;
}