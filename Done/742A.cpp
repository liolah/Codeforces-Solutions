#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int a[] = { 6,8,4,2 };
  int n;
  cin >> n;
  if (n == 0)
    cout << 1;
  else
    cout << a[n % 4];

  return 0;
  }
