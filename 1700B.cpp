#include <bits/stdc++.h>
using namespace std;

string subtract(string a, string b, int n) {
  string res;
  bool borrow = false;
  for (int i = n - 1;i >= 0;i--) {
    if (borrow) {
      if (a[i] > b[i]) {
        res = (char)(a[i] - b[i] + 48 - 1) + res;
        borrow = false;
        }
      else {
        res = (char)(a[i] - b[i] + 48 + 9) + res;
        }
      }
    else {
      if (a[i] >= b[i]) {
        res = (char)(a[i] - b[i] + 48) + res;
        }
      else {
        res = (char)(a[i] - b[i] + 48 + 10) + res;
        borrow = true;
        }
      }
    }
  return res;
  }

void solve() {
  int n;
  string s;
  cin >> n >> s;
  if (n < 20)
    if (s[0] == '9')
      cout << stoull(string(n + 1, '1')) - stoull(s) << "\n";
    else
      cout << stoull(string(n, '9')) - stoull(s) << "\n";
  else
    if (s[0] == '9')
      cout << subtract(string(n + 1, '1'), s, n) << "\n";
    else
      cout << subtract(string(n, '9'), s, n) << "\n";
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
