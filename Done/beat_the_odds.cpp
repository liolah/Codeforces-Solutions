#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;
    int b[a];
    int x = 0;
    for (int i = 0; i < a; i++)
    {
      cin >> b[i];
      if (b[i] % 2 == 1)
      {
        x++;
      }
    }
    if (x > a / 2)
      cout << a - x << "\n";
    else
      cout << x << "\n";
  }
  return 0;
}