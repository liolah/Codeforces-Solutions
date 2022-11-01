#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // * This code works flawlessly on my machine. This worng answer is on CF. The error most likely is because it refuses to give access to memory outside of the array
  int n, x, cnt = 0;
  cin >> n >> x;
  int a[n];
  for (int i = 0;i < n;i++) cin >> a[i];
  if (a[x - 1]) cnt++;
  for (int i = 1;i <= max(x - 1, n - x);i++) {
    if (a[x - 1 - i] and x + i > n and x - 1 - i >= 0 or a[x - 1 + i] and x - i < 1 and x - 1 + i <= n - 1)
      cnt++;
    if (a[x - 1 - i] == 1 and a[x - 1 + i] == 1 and x - 1 + i <= n - 1 and x - 1 - i >= 0)
      cnt += 2;
    }
  cout << cnt;

  return 0;
  }

// if (a[x - 1 - i] and x - 1 - i >= 0 or a[x - 1 + i] and x - 1 + i <= n - 1)
// cnt++;
// if (a[x - 1 - i] == 1 and a[x - 1 + i] == 1 and x - 1 + i <= n - 1 and x - 1 - i >= 0)
// cnt += 2;