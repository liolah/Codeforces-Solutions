#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, ans = 0;
  string polygon;
  cin >> n;
  while (n--) {
    cin >> polygon;
    if (polygon == "Tetrahedron")
      ans += 4;
    else if (polygon == "Cube")
      ans += 6;
    else if (polygon == "Octahedron")
      ans += 8;
    else if (polygon == "Dodecahedron")
      ans += 12;
    else
      ans += 20;
    }
  cout << ans;

  return 0;
  }
