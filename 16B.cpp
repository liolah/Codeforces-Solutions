#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m, a, b, sack = 0, matches = 0;
  cin >> n >> m;
  vector<pair<int, int>> container;
  for (int i = 0;i < m;i++) {
    cin >> a >> b;
    container.push_back(make_pair(b, a));
    }
  sort(rbegin(container), rend(container));
  for (auto p : container) {
    if (sack + p.second > n) {
      matches += (n - sack) * p.first;
      break;
      }
    else {
      sack += p.second;
      matches += p.first * p.second;
      }
    }
  cout << matches;

  return 0;
  }
