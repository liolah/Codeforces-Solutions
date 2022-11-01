//---------------------------------------------------------------------------------------
// 287B.cpp     (^._.^)ﾉ
// Author: Hesham Hany
// Created on: Sun Jul 17 2022
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

  ll n, k;
  cin >> n >> k;
  auto maxPipes = [&](ll m) {
    return ((k * (k + 1)) / 2) - (((k - m) * (k - m + 1)) / 2) - m + 1;
    };
  if (maxPipes(k) >= n) {
    ll l = 0, r = k - 1, mid, res;
    while (l <= r) {
      mid = (l + r) >> 1;
      if (maxPipes(mid) > n) {
        res = mid;
        r = mid - 1;
        }
      else if (maxPipes(mid) < n)
        l = mid + 1;
      else {
        res = mid;
        break;
        }
      }
    cout << res;
    }
  else
    cout << -1;

  return 0;
  }
