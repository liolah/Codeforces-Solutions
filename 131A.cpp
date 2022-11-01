#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  cin >> s;
  if (all_of(s.begin() + 1, s.end(), [](char x) {return isupper(x);})) { 
    s[0] = islower(s[0]) ? toupper(s[0]) : tolower(s[0]);
    transform(s.begin() + 1, s.end(), s.begin() + 1, ::tolower);
  }
  cout << s;
  return 0;
}
