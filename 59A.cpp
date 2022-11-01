#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string x;
  cin >> x;
  int c = 0, s = 0;
  for (auto y : x) {
    if (isupper(y))
      c++;
    else
      s++;
    }
  if (s >= c)
    for (auto& y : x) y = tolower(y);
  else
    for (auto& y : x) y = toupper(y);

  cout << x;

  return 0;
  }
