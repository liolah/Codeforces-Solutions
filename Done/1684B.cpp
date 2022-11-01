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
    int a[3];
    for (int i = 0; i < 3; i++)
    {
      cin >> a[i];
    }
    // *Logic goes here*
    cout << a[0] + a[1] + a[2] << "\t" << a[1] + a[2] << "\t" << a[2] << "\n";
  }
  return 0;
}
