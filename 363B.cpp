#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, k, best = INT_MAX, r = 0, sum;
  cin >> n >> k;
  int a[n];
  for (int i = 0;i < n;i++) cin >> a[i];
  for (int i = 1;i < n;i++) a[i] += a[i - 1];
  for (int i = k - 1;i < n;i++) {
    sum = a[i] - (int)(i >= k) * a[(int)(i >= k) * (i - k)];
    if (sum < best) {
      best = sum;
      r = i - k + 2;
      }
    }
  cout << r;

  return 0;
  }
