#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string a, b;
  cin >> a >> b;
  int x = 0, y = 0;
  while (x < a.length() and y < b.length()) {
    if (a[x] == b[y]) {
      x++;
      y++;
      }
    else {
      y++;
      }
    }
  cout << x + 1;



  return 0;
  }
