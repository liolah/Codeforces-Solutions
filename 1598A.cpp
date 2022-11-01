//---------------------------------------------------------------------------------------
// 1598A.cpp     (^._.^)ﾉ~
// Author: Hesham Hany
// Created on: Wed Jul 13 2022 11:37:16 PM
//---------------------------------------------------------------------------------------
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vii;

#define IN(a) for (auto& x : a) cin >> x
#define lp(i,n) for (int i = 0;i < n;i++)
#define all(v) begin(v), end(v)

void solve() {
  int n;
  string a, b;
  cin >> n >> a >> b;
  for (int i = 0;i < n;i++) if (a[i] == b[i] and b[i] == '1') {
    cout << "NO\n";
    return;
    }
  cout << "YES\n";
  }

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    solve();
    }

  return 0;
  }
