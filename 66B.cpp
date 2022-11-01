#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // * Incomplete algorithm, supposed to be in order of O(n) instead of the brute force O(n^2). I am too lazy to complete it.
  // int n;
  // cin >> n;
  // int a[n], dx[n]{ 0 };
  // for (int i = 0;i < n;i++) cin >> a[i];
  // for (int i = 1;i < n;i++) {
  //   if (a[i] > a[i - 1])
  //     dx[i] = 1;
  //   else if (a[i] == a[i - 1] or a[i] < a[i - 1] and a[i] == a[i + 1])
  //     dx[i] = 0;
  //   else if (a[i] < a[i - 1])
  //     dx[i] = -1;
  //   }
  // int x, y;
  // x = y = 0;
  // while

  int n, best = 1, cnt;
  cin >> n;
  int a[n];
  for (int i = 0;i < n;i++) cin >> a[i];
  for (int i = 0;i < n;i++) {
    cnt = 1;
    if (a[i + 1] <= a[i] and i < n - 1) {
      for (int j = i + 1;j < n;j++) {
        if (a[j - 1] >= a[j])
          cnt++;
        else
          break;
        }
      }
    if (a[i - 1] <= a[i] and i > 0) {
      for (int k = i - 1;k >= 0;k--) {
        if (a[k] <= a[k + 1])
          cnt++;
        else
          break;
        }
      }
    best = max(best, cnt);
    }
  cout << best;

  return 0;
  }
