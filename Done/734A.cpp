#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  string s;
  cin >> n >> s;
  int a = 0;
  for (auto c : s) {
    if (c == 'A')a++;
  }
  // a = count(begin(s), end(s), 'A'); //* Alt
  if (a > n - a)
    cout << "Anton" << "\n";
  else if (a < n - a)
    cout << "Danik" << "\n";
  else
    cout << "Friendship" << "\n";

  return 0;
}
