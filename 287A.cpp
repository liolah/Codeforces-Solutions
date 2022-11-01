#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  bool valid = false;
  string s[4];
  cin >> s[0] >> s[1] >> s[2] >> s[3];
  for (int i = 0;i < 3;i++) {
    if (valid) break;
    for (int j = 0;j < 3;j++) {
      if ((int)((s[i][j] == s[i][j + 1]) + (s[i][j] == s[i + 1][j]) + (s[i][j] == s[i + 1][j + 1]) + (s[i + 1][j] == s[i + 1][j + 1]) + (s[i][j + 1] == s[i + 1][j]) + (s[i][j + 1] == s[i + 1][j + 1])) >= 3) {
        valid = true;
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
