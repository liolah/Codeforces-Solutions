#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, x, ans = 0;
  cin >> n;
  int a[100]{ 0 }, b[100]{ 0 };
  for (int i = 0;i < n;i++) {
    cin >> x;
    a[x - 1]++;
    cin >> x;
    b[x - 1]++;
    }
  for (int i = 0;i < 100;i++) ans += a[i] * b[i];
  cout << ans;

  return 0;
  }
