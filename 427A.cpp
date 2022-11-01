#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, t, crimes = 0, police = 0;
  cin >> n;
  while (n--) {
    cin >> t;
    if (t == -1) {
      if (police > 0)
        police--;
      else
        crimes++;
      }
    else
      police += t;
    }
  cout << crimes;

  return 0;
  }
