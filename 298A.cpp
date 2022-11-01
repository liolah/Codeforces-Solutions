#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  string x;
  cin >> n >> x;
  int rl = 0, ll = 0, rr = 0, lr = 0;
  for (int i = 1;i < n - 1;i++) {
    if (x[i] == 'R' and x[i - 1] != x[i])
      lr = i;
    if (x[i] == 'R' and x[i + 1] != x[i])
      rr = i;
    if (x[i] == 'L' and x[i - 1] != x[i])
      ll = i;
    if (x[i] == 'L' and x[i + 1] != x[i])
      rl = i;
    }
  if (rr == 0)
    cout << rl + 1 << " " << ll;
  else
    cout << lr + 1 << " " << rr + 2;

  return 0;
  }
