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
    int a = 0;
    int b = 0;
    int v = true;
    if (x.length() < 2 || x[0] == 'B' ||  x[x.length() - 1] == 'A')
      v = false;
    else
      for (int i = 0; i < x.length(); i++) {
        if (x[i] == 'A')
          a++;
        else
          b++;
        if (b > a) {
          v = false;
          break;
        }
      }
    if (b == 0)
      v = false;
    
    if (!v) {
    cout << "NO" << '\n';
    }
    else {
      cout << "YES" << '\n';
    }
  }
  return 0;
}
