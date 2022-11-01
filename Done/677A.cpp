#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, h;
  cin >> n >> h;
  int a[n];
  int s = n;
  for (int i = 0;i < n;i++) {
    cin >> a[i];
    if (a[i] > h)s++;
  }
  cout << s << "\n";
  return 0;
}
