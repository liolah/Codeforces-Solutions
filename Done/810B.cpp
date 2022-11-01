//---------------------------------------------------------------------------------------
// 810B.cpp     (^._.^)ﾉ~
// Author: Hesham Hany
// Created on: Wed Jul 13 2022 8:41:12 PM
//---------------------------------------------------------------------------------------
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vii;

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, f;
  ull p = 0, x, y;
  cin >> n >> f;
  ull ppi[n];
  for (int i = 0;i < n;i++) {
    cin >> x >> y;
    p += min(x, y);
    ppi[i] = min(2 * x, y) - min(x, y);
    }
  sort(ppi, ppi + n, greater());
  for (int i = 0;i < f;i++) p += ppi[i];
  cout << p;

  return 0;
  }
