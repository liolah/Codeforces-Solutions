#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  cin >> s;
  int a[26]{ 0 };
  int d = 0;
  for (auto c : s) a[c - 'a']++;
  for (auto i : a) if (i > 0) d++;
  if (d & 1)
    cout << "IGNORE HIM!";
  else
    cout << "CHAT WITH HER!";

  return 0;
  }
