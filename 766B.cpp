#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vii;

#define IN(a,n) int a[n]; for (int i = 0;i < n;i++) cin >> a[i];
#define lp(i,n,inc) for (int i = 0;i < n;i += inc)
#define all(v) begin(v), end(v)

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  bool okay = false;
  cin >> n;
  int a[n];
  for (int i = 0;i < n;i++) cin >> a[i];
  sort(a, a + n);
  for (int i = n - 1;i > 1;i--) {
    if (a[i] < a[i - 1] + a[i - 2])
      okay = true;
    }
  if (okay)
    cout << "YES";
  else
    cout << "NO";

  return 0;
  }
