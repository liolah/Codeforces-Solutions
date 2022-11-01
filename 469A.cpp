#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, x, y, t;
  unordered_set<int> s;
  cin >> n >> x;
  for (int i = 0;i < x;i++) {
    cin >> t;
    s.insert(t);
    }
  cin >> y;
  for (int i = 0;i < y;i++) {
    cin >> t;
    s.insert(t);
    }
  if (s.size() == n)
    cout << "I become the guy.";
  else
    cout << "Oh, my keyboard!";

  return 0;
  }
