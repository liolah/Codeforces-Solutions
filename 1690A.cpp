#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    int n;
    cin >> n;
    int q = n / 3;
    int m = n % 3;
    int a, b, c;
    switch(m){
      case 0:
        a = q + 1;
        b = q;
        c = q - 1;
        break;
      case 1:
        a = q + 2;
        b = q;
        c = q - 1;
        break;
      case 2:
        a = q + 2;
        b = q + 1;
        c = q - 1;
        break;
    }
    cout << b << "\t" << a << "\t" << c << "\n";
  }
  return 0;
}