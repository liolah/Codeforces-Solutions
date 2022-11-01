//=======================================================================================
// 1638B.cpp     (^._.^)ﾉ~
// Author: Hesham Hany
// Created on: Sat Aug 13 2022
//=======================================================================================
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vii;

#define pb push_back
#define all(v) begin(v),end(v)
#define lp(i,n) for(int i = 0;i < n;i++)

void solve() {
  int n, x;
  vi even, odd;
  cin >> n;
  lp(i, n) {
    cin >> x;
    if (x & 1)
      odd.pb(x);
    else
      even.pb(x);
    }
  if (is_sorted(all(even)) and is_sorted(all(odd)))
    cout << "YES";
  else
    cout << "NO";
  }

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    solve();
    cout << '\n';
    }

  return 0;
  }
