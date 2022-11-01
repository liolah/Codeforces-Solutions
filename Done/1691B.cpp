#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  int a[n];
  int b[n];
  int count = 1;
  int minc = INT_MAX;
  int temp = 0;
  for (int i = 0;i < n;i++) {
    cin >> a[i];
    b[i] = i + 1;
    if (a[i] == temp) {
      count++;
    }
    else {
      minc = i > 0 ? i == n - 1 ? 1 : min(count, minc) : INT_MAX;
      temp = a[i];
      count = 1;
    }
  }
  if (minc > 1 && n > 1) {
    for (int i = 0;i < n - 1;i++) {
      if (a[i] == a[i + 1])
        swap(b[i], b[i + 1]);
    }
    for (auto& q : b) {
      cout << q << "\t";
    }
    cout << "\n";
  }
  else {
    cout << -1 << "\n";
  }
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
