#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string x, ans;
  int n, fdigit = 0, cpos = 0, r, c;
  cin >> n;
  for (int i = 0;i < n;i++) {
    cin >> x;
    // if (x[0] == 'R') {
    for (int j = 0;j < x.length();j++) {
      if (x[j] - '0' >= 0 and x[j] - '0' < 10) {
        if (fdigit == 0)
          fdigit = j;
        }
      else {
        if (x[j] == 'C' and fdigit != 0) {
          cpos = j;
          break;
          }
        }
      }

    if (cpos > 0) {
      c = stoi(x.substr(cpos + 1));
      while (c > 26) {
        if (c % 26 > 0)
          ans = (char)(c % 26 + 'A' - 1) + ans;
        else {
          ans = 'Z' + ans;
          c--;
          }
        c -= (c % 26);
        c /= 26;
        }
      ans = ((char)('A' + c - 1)) + ans;
      cout << ans + x.substr(fdigit, cpos - fdigit) << "\n";
      }
    else {
      r = stoi(x.substr(fdigit));
      c = 0;
      for (int i = 0;i < fdigit;i++)
        c += (x[i] - 'A' + 1) * pow(26, fdigit - 1 - i);
      cout << "R" << r << "C" << c << "\n";
      }
    cpos = fdigit = 0;
    ans = "";
    }

  return 0;
  }
