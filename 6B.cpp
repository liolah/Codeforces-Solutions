#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;

void solve() {

  }

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m, res = 0;
  int dep[26]{ 0 };
  char p;
  cin >> n >> m >> p;
  string s[n];
  for (int i = 0;i < n;i++) cin >> s[i];
  for (int i = 0;i < n;i++) {
    for (int j = 0;j < m;j++) {
      if (s[i][j] == p) {
        if (i > 0 and s[i - 1][j] != '.') dep[s[i - 1][j] - 'A']++;
        if (i < n - 1 and s[i + 1][j] != '.') dep[s[i + 1][j] - 'A']++;
        if (j > 0 and s[i][j - 1] != '.') dep[s[i][j - 1] - 'A']++;
        if (j < m - 1 and s[i][j + 1] != '.') dep[s[i][j + 1] - 'A']++;
        }
      }
    }
  for (int i = 0;i < 26;i++) if (dep[i] and i != p - 'A') res++;
  cout << res;

  return 0;
  }

