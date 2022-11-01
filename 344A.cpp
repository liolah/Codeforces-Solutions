#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, count = 1;
  cin >> n;
  string s, ps;
  cin >> ps;
  for (int i = 1;i < n;i++) {
    cin >> s;
    if (s != ps) {
      count++;
      ps = s;
      }
    }
  cout << count;

  return 0;
  }
