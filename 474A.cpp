#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  const string key = "qwertyuiopasdfghjkl;zxcvbnm,./";
  unordered_map<char, int> m;
  for (int i = 0;i < key.length();i++) m[key[i]] = i;
  char d;
  string x;
  cin >> d >> x;
  int dir = d == 'L' ? 1 : -1;
  for (int i = 0;i < x.length();i++) {
    x[i] = key[m[x[i]] + dir];
    }
  cout << x;

  return 0;
  }
