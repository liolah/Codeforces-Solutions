#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    string a, b;
    cin >> a >> b;
    bool c = !(b.find('a') == string::npos);
    if (c) {
      if(b.length() > 1)
        cout << -1 << "\n";
      else 
        cout << 1 << "\n";
    }
    else {
      long long x = pow(2, count(a.begin(), a.end(), 'a'));
      cout << x << "\n";
    }
  }
  return 0;
}
