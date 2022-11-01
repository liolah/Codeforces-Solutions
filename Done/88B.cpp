//---------------------------------------------------------------------------------------
// 88B.cpp     (^._.^)ﾉ~
// Author: Hesham Hany
// Created on: Wed Jul 13 2022 6:51:43 PM
//---------------------------------------------------------------------------------------
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vii;

#define IN(a,n) int a[n]; for (int i = 0;i < n;i++) cin >> a[i];
#define lp(i,n,inc) for (int i = 0;i < n;i += inc)
#define all(v) begin(v), end(v)

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m, x, q, cnt = 0, mindist = INT_MAX, dist = INT_MAX;
  bool okay = true;
  char t;
  map<char, vii> keyboard;
  string text;
  cin >> n >> m >> x;
  for (int i = 0;i < n;i++)
    for (int j = 0;j < m;j++) {
      cin >> t;
      if (t == 'S')
        keyboard['<'].push_back(make_pair(i, j));
      else
        keyboard[t].push_back(make_pair(i, j));
      }
  cin >> q >> text;
  for (auto letter : text) {
    if (isupper(letter)) {
      if (!(keyboard.count(tolower(letter)) and keyboard.count('<'))) {
        okay = false;
        break;
        }
      else {
        mindist = INT_MAX;
        for (auto lpos : keyboard[tolower(letter)]) {
          for (auto spos : keyboard['<']) {
            dist = (lpos.first - spos.first) * (lpos.first - spos.first) + (lpos.second - spos.second) * (lpos.second - spos.second);
            mindist = min(dist, mindist);
            }
          }
        if (mindist > x * x)
          cnt++;
        }
    }
    else {
    if (!keyboard.count(letter)) {
      okay = false;
      break;
      }
      }
  }

if (okay)
cout << cnt;
else
cout << -1;

return 0;
  }
