#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, x, c;
  cin >> n;
  c = n;
  priority_queue<int> q;
  for (int i = 0;i < n;i++) {
    cin >> x;
    q.push(x);
    while (q.top() == c) {
      cout << q.top() << " ";
      q.pop();
      c--;
      }
    cout << "\n";
    }

  return 0;
  }
