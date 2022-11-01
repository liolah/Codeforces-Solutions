#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  int n;
  cin >> n;
  int a[n];
  int count[101]{ 0 };
  bool m = false;
  for (int i = 0;i < n;i++) {
    cin >> a[i];
    count[a[i]]++;
    if (count[a[i]] > 1) m = true;
  }
  if (count[0])
    cout << n - count[0] << "\n";
  else if (m)
    cout << n << "\n";
  else
    cout << n + 1 << "\n";

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
