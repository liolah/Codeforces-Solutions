#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  string s[n];
  for (int i = 0;i < n;i++) cin >> s[i];
  bool valid = true;
  char x = s[0][0], o = s[0][1];
  for (int i = 0;i < n;i++) {
    if (x == o or s[i][i] != x or s[i][n - i - 1] != x) {
      valid = false;
      break;
      }
    for (int j = 0;j < n;j++) {
      if (i != j and j != n - i - 1 and s[i][j] != o) {
        valid = false;
        break;
        }
      }
    }
  if (valid)
    cout << "YES";
  else
    cout << "NO";

  return 0;
  }
