#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int a[] = { 2,3,5,7,11,13,17,19,23,29,31,37,41,43,47 };
  int n, m;
  cin >> n >> m;
  if (find(a, a + 15, n) + 1 == find(a, a + 15, m) and find(a, a + 15, m) != end(a))
    cout << "YES";
  else
    cout << "NO";

  return 0;
  }
