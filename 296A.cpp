#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, t;
  bool valid = true;
  cin >> n;
  unordered_multiset<int> s;
  for (int i = 0;i < n;i++) {
    cin >> t;
    s.insert(t);
    }

  if (n > 1) {
    for (auto i : s) {
      if (s.count(i) > n / 2 + (n & 1)) {
        valid = false;
        break;
        }
      }
    }

  if (valid)
    cout << "YES";
  else
    cout << "NO";

  return 0;
  }
