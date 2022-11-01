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
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      sum += a[i];
    }
    // *Logic goes here*
    bool exist = false;
    for (int i = 0; i < n; i++){
      if ((sum - a[i]) / (n - 1) == a[i] && (sum - a[i]) % (n - 1) == 0)
        {
          exist = true;
        }
    }
    if(exist)
    cout << "YES" << "\n";
    else 
    cout << "NO" << "\n";
  }
  return 0;
}
