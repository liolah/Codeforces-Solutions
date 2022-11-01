#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, a, b, c;
  bool maybe = true, unrated = true;
  cin >> n;
  for (int i = 0;i < n;i++) {
    cin >> a >> b;
    if (i > 0 and c < a) maybe = false;
    c = a;
    if (a != b) unrated = false;
    }
  if (!unrated)
    cout << "rated";
  else if (maybe)
    cout << "maybe";
  else
    cout << "unrated";

  return 0;
  }
