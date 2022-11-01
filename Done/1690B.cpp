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
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
      cin >> b[i];
    }
    // *Logic goes here*
    int x = 0;
    int y = 0;
    int z = 0;
    bool set = false;
    for (int i = 0; i < n; i++)
    {
      x = max(x, a[i] - b[i]);
      if (b[i] > 0)
      {
        if (!set)
        {
          y = a[i] - b[i];
          set = true;
        }
        else
        {
          y = min(y, a[i] - b[i]);
        }
      }
      z += b[i];
    }
    if ((x > y && n != 1 && z != 0) || y < 0)
      cout << "NO" << "\n";
    else
      cout << "YES" << "\n";
  }
  return 0;
}