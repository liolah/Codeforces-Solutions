#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, p;
  cin >> n;
  int a[n];
  for (int i = 1;i <= n;i++) {
    cin >> p;
    a[p - 1] = i;
    }
  for (auto i : a) cout << i << " ";

  return 0;
  }
