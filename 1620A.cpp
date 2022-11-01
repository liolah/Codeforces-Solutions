#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;

void solve() {
  string s;
  cin >> s;
  if (count(begin(s), end(s), 'N') == 1)
    cout << "NO\n";
  else
    cout << "YES\n";
  }

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    solve();
    }

  return 0;
  }
