#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string a, b;
  cin >> a >> b;
  for (auto &c : a) c = tolower(c);
  for (auto &c : b) c = tolower(c);
  if (a > b)
    cout << 1;
  else if (a < b)
    cout << -1;
  else
    cout << 0;

  return 0;
  }
