#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n, r, b;
    cin >> n >> r >> b;
    int f = r / (b+1);
    int x = r % (b+1);
    string v = string(f, 'R');
    string y = "B" + string(f, 'R');
    for (int i = 0; i < b; i++) {
      v += y;
      if (x > 0) v += "R";
      x--;
    }
    cout << v << '\n';
  }
  return 0;
}
