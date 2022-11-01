#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, sum = 0, c = 0, x = 0;
  cin >> n;
  int a[n];
  for (int i = 0;i < n;i++) {
    cin >> a[i];
    sum += a[i];
    }
  sort(a, a + n);
  for (int i = n - 1;i >= 0;i--) {
    if (x <= sum) {
      x += a[i];
      sum -= a[i];
      c++;
      }
    }
  cout << c;


  return 0;
  }
