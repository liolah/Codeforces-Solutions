#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, t;
  cin >> n;
  vector<int> a, b, c;
  for (int i = 1;i <= n;i++) {
    cin >> t;
    if (t == 1)
      a.push_back(i);
    else if (t == 2)
      b.push_back(i);
    else
      c.push_back(i);
    }
  cout << min({ a.size(), b.size(), c.size() }) << "\n";
  while (a.size() > 0 and b.size() > 0 and c.size() > 0) {
    cout << a.back() << " " << b.back() << " " << c.back() << "\n";
    a.pop_back();
    b.pop_back();
    c.pop_back();
    }



  return 0;
  }
