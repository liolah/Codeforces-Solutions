#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, k;
  string num;
  cin >> n >> k;
  int good = n;
  for (int i = 0;i < n;i++) {
    cin >> num;
    set<char> s(begin(num), end(num));
    for (int j = 0;j <= k;j++) {
      if (*(next(begin(s), j)) - 48 != j) {
        good--;
        break;
        }
      }
    }
  cout << good;

  return 0;
  }
