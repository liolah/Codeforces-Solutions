#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, k;
  string s;
  cin >> n >> k;
  for (int i = 0;i < k;i++) s += (char)('a' + i % 26);
  for (int i = 0;i < (n - k) / 2;i++) s += "ab";
  if ((n - k) & 1) s += 'a';
  cout << s;

  return 0;
  }
