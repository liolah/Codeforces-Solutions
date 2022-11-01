#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, t;
  bool balanced = true;
  cin >> n;
  for (int i = 0; i < n;i++) {
    cin >> t;
    if (!(t & 1)) {
      cout << t / 2 << "\n";
      }
    else {
      if (balanced) {
        if (t > 0)
          cout << (t + 2) / 2 << "\n";
        else
          cout << t / 2 << "\n";
        balanced = false;
        }
      else {
        if (t > 0)
          cout << t / 2 << "\n";
        else
          cout << (t - 2) / 2 << "\n";
        balanced = true;
        }
      }
    }

  return 0;
  }
