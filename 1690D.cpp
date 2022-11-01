#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n, k;
    string s;
    cin >> n >> k >> s;
    int Bcount = 0;
    for (int i = 0; i < k; i++) {
      if (s[i] == 'B') Bcount++;
    }
    int m = Bcount;
    for (int i = k; i < n; i++) {
      if (s[i] == 'B')
        Bcount++;
      if (s[i - k] == 'B')
        Bcount--;
      m = max(m, Bcount);
    }
    cout << max(0, k - m) << "\n";
  }
    return 0;
}
