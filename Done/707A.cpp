#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  bool colored = false;
  char color;
  int x, y;
  cin >> x >> y;
  for (int i = 0;i < x * y;i++) {
    cin >> color;
    if (color == 'C' or color == 'M' or color == 'Y')
      colored = true;
    }
  if (colored)
    cout << "#Color";
  else
    cout << "#Black&White";

  return 0;
  }
