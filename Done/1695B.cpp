#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  int a[n];
  int minM = INT_MAX, minJ = INT_MAX, iM = 0, iJ = 0;
  for (int i = 0;i < n;i++) {
    cin >> a[i];
    if (i & 1) {
      if (a[i] < minJ) {
        minJ = a[i];
        iJ = i;
      }
    }
    else {
      if (a[i] < minM) {
        minM = a[i];
        iM = i;
      }
    }
  }
  if (minM * ceil(n / 2) + (iM / 2) > minJ * floor(n / 2) + (iJ / 2) || n & 1)
    cout << "Mike" << "\n";
  else
    cout << "Joe" << "\n";
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
