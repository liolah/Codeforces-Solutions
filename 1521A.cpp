#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vii;

void solve() {
  ll A, B;
  cin >> A >> B;
  if (B == 1)
    cout << "NO";
  else
    cout << "YES\n" << A * B << ' ' << A << ' ' << A * (B + 1);
  }

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  for (cin >> t;t--;cout << '\n')
    solve();
  return 0;
  }
