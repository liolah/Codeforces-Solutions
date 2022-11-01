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
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    // *Logic goes here*
    int b = 0;
    int c = 0;
      for (int i = 0; i < n; i++){
        if (a[i] >= b){
          b = a[i];
        } else {
          b = 0;
          c++;
        }
      }
    cout << c << "\n";
    }
    return 0;
}
