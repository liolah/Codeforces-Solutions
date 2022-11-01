#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string num;
  cin >> num;
  num[0] = num[0] == '9' ? num[0] : num[0] > '4' ? '9' - num[0] + '0' : num[0];
  for (int i = 1;i < num.length();i++)
    if (num[i] > '4')
      num[i] = '9' - num[i] + '0';
  cout << num;

  return 0;
  }
