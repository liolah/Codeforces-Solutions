//---------------------------------------------------------------------------------------
// 910A.cpp     (^._.^)ﾉ~
// Author: Hesham Hany
// Created on: Thu Jul 14 2022 12:15:40 AM
//---------------------------------------------------------------------------------------
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vii;

#define IN(a,n) int (a)[(n)]; for (int i = 0;i < (int)(n);i++) cin >> (a)[i]
#define lp(i,n) for (int (i) = 0;(i) < (n);(i)++)
#define all(v) begin(v), end(v)

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, d, l = 0, r = 0, j = 1;
  bool okay = true;
  string s;
  cin >> n >> d >> s;
  r = d;
  while (r < n) {
    if (s[r] == '0')
      r--;
    else {
      l = r;
      if (r < n - 1)
        j++;
      r = l + d;
      }
    if (r == l) {
      okay = false;
      break;
      }
    }

  if (okay)
    cout << j;
  else
    cout << -1;

  return 0;
  }
