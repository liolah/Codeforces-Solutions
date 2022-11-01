#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string scale, w;
  cin >> scale >> w;
  int splitter = scale.find('|');
  if (!((scale.length() - 1 + w.length()) & 1) and min(splitter, (int)scale.length() - splitter - 1) + w.length() >= max(splitter, (int)scale.length() - splitter - 1)) {
    for (auto c : w) {
      if (scale.find('|') > scale.length() / 2)
        scale += c;
      else if (scale.find('|') < scale.length() / 2)
        scale = c + scale;
      else
        scale += c;
      }
    cout << scale;
    }
  else
    cout << "Impossible";

  return 0;
  }
