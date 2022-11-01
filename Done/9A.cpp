#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int x, y;
  cin >> x >> y;
  if (max(x, y) == 1)
    cout << "1/1";
  else if (max(x, y) == 2)
    cout << "5/6";
  else if (max(x, y) == 3)
    cout << "2/3";
  else if (max(x, y) == 4)
    cout << "1/2";
  else if (max(x, y) == 5)
    cout << "1/3";
  else
    cout << "1/6";

  


  return 0;
  }
