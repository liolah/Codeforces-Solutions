#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, k;
  cin >> n >> k;
  int a[2 * n + 1];
  for (int i = 0;i < 2 * n + 1;i++) cin >> a[i];
  for (int i = 1;i < 2 * n + 1;i += 2) {
    if (k and a[i] - a[i - 1] > 1 and a[i] - a[i + 1] > 1) {
      a[i]--;
      k--;
      }
    if (k == 0) break;
    }

  for (auto i : a) {
    cout << i << " ";
    }

  return 0;
  }
