#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  string s;
  cin >> n >> s;
  if (n >= 26) {
    transform(begin(s), end(s), begin(s), ::toupper);
    unordered_set<char> c(begin(s), end(s));
    if (c.size() >= 26)
      cout << "YES";
    else
      cout << "NO";
    }
  else
    cout << "NO";


  return 0;
  }
