//---------------------------------------------------------------------------------------
// 79B.cpp     (^._.^)ﾉ~
// Author: Hesham Hany
// Created on: Wed Jul 13 2022 8:38:07 PM
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
  string crops[] = { "Grapes", "Carrots", "Kiwis" };
  int n, m, k, t, x, y;
  cin >> n >> m >> k >> t;
  int a[n];
  vi waste[n];
  for (int i = 0;i < k;i++) {
    cin >> x >> y;
    waste[x - 1].push_back(y - 1);
    }
  a[0] = waste[0].size();
  for (int i = 1;i < n;i++) {
    a[i] = a[i - 1] + waste[i].size();
    }
  for (int i = 0;i < n;i++) sort(begin(waste[i]), end(waste[i]));
  for (int i = 0;i < t;i++) {
    cin >> x >> y;
    if (find(begin(waste[x - 1]), end(waste[x - 1]), y - 1) != end(waste[x - 1]))
      cout << "Waste\n";
    else {
      cout << crops[((x - 1) * m + y - (lower_bound(begin(waste[x - 1]), end(waste[x - 1]), y - 1) - begin(waste[x - 1])) - (x > 1 ? a[x - 2] : 0)) % 3] << '\n';
      }
    }

  return 0;
  }
