//---------------------------------------------------------------------------------------
// 1646A.cpp     (^._.^)ﾉ~
// Author: Hesham Hany
// Created on: Mon Jul 11 2022 8:34:12 PM
//---------------------------------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;

#define IN(a,n) for (int i = 0;i < n;i++) cin >> a[i];
#define INA(a,n) int a[n]; \
              for (int i = 0;i < n;i++) cin >> a[i];
#define forn(i,n,inc) for (int i = 0;i < n;i += inc)
#define all(v) begin(v), end(v)

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    ull n, k;
    cin >> n >> k;
    cout << k / (n * n) << '\n';
    }

  return 0;
  }
