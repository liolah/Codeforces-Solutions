#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  cin >> s;
  if (s.length() == 1)
    cout << 0;
  else {
    if (s.find('1', 1) == string::npos) {
      if (s.length() & 1) {
        cout << (s.length() - 1) / 2;
        }
      else {
        cout << s.length() / 2;
        }
      }
    else {
      if (s.length() & 1) {
        cout << (s.length() - 1) / 2 + 1;
        }
      else {
        cout << s.length() / 2;
        }
      }
    }
  return 0;
  }
