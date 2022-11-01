#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  char r[7] = { 'R', 'O', 'Y', 'G', 'B', 'I', 'V' };
  string x;
  int n;
  cin >> n;
  if (n % 7 < 4) {
    for (int i = 0; i < n - 3 - (n % 7);i++) {
      x += r[i % 7];
      }
    for (int i = 0; i < n % 7;i++) {
      x += r[i % 7];
      }
    x += "BIV";
    }
  else {
    for (int i = 0; i < n;i++) {
      x += r[i % 7];
      }
    }
  cout << x;

  return 0;
  }
