#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, best = 0;
  string t, ans;
  cin >> n;
  unordered_multiset<string> x;
  for (int i = 0;i < n;i++) {
    cin >> t;
    x.insert(t);
    }
  for (auto s : x) {
    if (x.count(s) > best) {
      ans = s;
      best = x.count(s);
      }
    }
  cout << ans;

  return 0;
  }
