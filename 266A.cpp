#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, c = 0;
  string s;
  cin >> n >> s;;
  for (int i = 1;i < n;i++) {
    if (s[i] == s[i-1]) c++;
    }
  cout << c;

  // int n, count=0;
  // char c, pc='h';
  // cin >> n;
  // while (n--) {
  //   cin >> c;
  //   if (c == pc) count++;
  //   pc = c;
  //   }
  // cout << count;

  return 0;
  }
