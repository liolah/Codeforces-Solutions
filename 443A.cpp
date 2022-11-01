#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  getline(cin, s);
  unordered_set<char> x(begin(s), end(s));
  int v = x.size() > 3 ? x.size() - 4 : x.size() == 3 ? 1 : 0;
  cout << v;

  return 0;
  }
