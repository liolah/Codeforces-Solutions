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
  ll sum = 0;
  cin >> n;
  lp(i, n) {
    cin >> x;
    sum += x;
    }
  cout << (n - (sum % n)) * (sum % n);
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
