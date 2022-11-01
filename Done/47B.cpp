#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string ans{ "LOL" };
  char a, s, b;
  int l[3]{ 0 };
  for (int i = 0;i < 3;i++) {
    cin >> a >> s >> b;
    if (s == '>')
      l[a - 'A']++;
    else
      l[b - 'A']++;
    }

  if (l[0] == l[1] and l[1] == l[2])
    cout << "Impossible";
  else {
    for (int i = 0;i < 3;i++) ans[l[i]] = 'A' + i;
    cout << ans;
    }

  return 0;
  }
