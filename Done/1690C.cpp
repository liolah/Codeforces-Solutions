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
    int c[a];
    for (int i = 0; i < a; i++)
    {
      cin >> b[i];
    }
    for (int i = 0; i < a; i++)
    {
      cin >> c[i];
    }
    // *Logic goes here*
    int x;
    cout << c[0] - b[0] << "\t";
    for (int i = 1; i < a; i++)
    {
      x = b[i] > c[i - 1] ? c[i] - b[i] : c[i] - c[i - 1];
      cout << x << "\t";
    }
    cout << "\n";
  }
  return 0;
}