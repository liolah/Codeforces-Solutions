#include <bits/stdc++.h>
using namespace std;

bool customCompare(const pair<string, int>& x, const pair<string, int>& y) {
  return x.second > y.second;
  }

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  string amigo;
  cin >> n;
  unordered_map<string, int> chats;
  for (int i = 0;i < n;i++) {
    cin >> amigo;
    chats[amigo] = i;
    }

  vector<pair<string, int>> vec(chats.begin(), chats.end());
  sort(begin(vec), end(vec), customCompare);


  for (auto c : vec) cout << c.first << '\n';

  return 0;
  }
