#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int sumNum(string s) {
  int sum = 0;
  for (auto c : s) {
    sum += c - '0';
    }
  return sum;
  }

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string num;
  int ans = 0;
  cin >> num;
  while (num.length() > 1) {
    num = to_string(sumNum(num));
    ans++;
    }
  cout << ans;

  return 0;
  }
