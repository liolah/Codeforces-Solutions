#include <bits/stdc++.h>
using namespace std;

#define INA(a,n) int n;\
cin >> n;\
int a[n]; \
for (int i = 0;i < n;i++) cin >> a[i];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  INA(a, n);
  // multiset<int> x(a, a + n);
  // cout << max((int)(x.size() - x.count(*begin(x)) - x.count(*--end(x))), 0);
  int ans = 0;
  sort(a, a + n);
  for (int i = 0;i < n;i++) {
    if (a[i] != a[0] and a[i] != a[n - 1]) ans++;
    }
  cout << ans;

  return 0;
  }
