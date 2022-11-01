#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // long long n, m, a, b, c, d, e, f;
  long long n, m, ans;
  cin >> n >> m;
  if (n + m < 5)
    cout << 0;
  else {
    // a = n % 5;
    // b = m % 5;
    // c = n / 5;
    // d = m / 5;
    // ans = c * d * 5 + a * d + b * c + min(a, max(-4LL + a + b, 0LL)) * (int)(n >= m) + min(b, max(-4LL + a + b, 0LL)) * (int)(m > n);
    ans = (n / 5) * (m / 5) * 5 + (n % 5) * (m / 5) + (m % 5) * (n / 5) + min((n % 5), max(-4LL + (n % 5) + (m % 5), 0LL)) * (int)(n >= m) + min((m % 5), max(-4LL + (n % 5) + (m % 5), 0LL)) * (int)(m > n);
    cout << ans;
    }

  return 0;
  }

