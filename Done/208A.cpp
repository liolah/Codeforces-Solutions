#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string x, ans;
  cin >> x;
  for (int i = 0;i < x.length();i++) {
    if (x[i] == 'W' and x[i + 1] == 'U' and x[i + 2] == 'B' and i < x.length() - 2) {
      if (ans[ans.length() - 1] != ' ' and !ans.empty())
        ans += " ";
      i += 2;
      }
    else
      ans += x[i];
    }
  cout << ans;

  return 0;
  }
