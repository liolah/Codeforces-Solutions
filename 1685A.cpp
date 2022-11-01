#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0;i < n;i++) {
    cin >> a[i];
    }
  if (n & 1)
    cout << "NO" << "\n";
  else {
    sort(a, a + n);
    vector<int> v;
    for (int i = n / 2;i < n;i++) {
      v.push_back(a[i - n / 2]);
      v.push_back(a[i]);
      }
    bool valid = v.back() > v[n - 2];
    if (valid) {
      for (int i = 1;i < n - 1;i += 2) {
        if (v[i] <= v[i - 1] or v[i] <= v[i + 1]) {
          valid = false;
          break;
          }
        }
      }
    if (valid) {
      cout << "YES" << "\n";
      for (auto x : v) {
        cout << x << "\t";
        }
      cout << "\n";
      }
    else
      cout << "NO" << "\n";
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
