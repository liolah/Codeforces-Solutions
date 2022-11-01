#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vii;

#define all(v) v.begin(),v.end()

int num(int a, int b) {
  int c = 0;
  while (a > 0) {
    a /= b;
    c++;
    }
  return c;
  }

void solve() {
  int a, b, c = 0;
  cin >> a >> b;
  vi bf;
  if (b == 1) c++;
  for (int i = 0;i < 31;i++, c++)
    bf.push_back(c + num(a, b + c));
  cout << *min_element(all(bf));
  }

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    solve();
    cout << '\n';
    }

  return 0;
  }
