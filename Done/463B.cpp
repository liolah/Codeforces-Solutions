#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, energy = 0, money = 0;
  cin >> n;
  int h[n];
  for (int i = 0;i < n;i++) cin >> h[i];
  if (h[0] > energy) {
    money += h[0];
    }
  for (int i = 0;i < n - 1;i++) {
    if (h[i + 1] - h[i] > energy) {
      money += h[i + 1] - h[i] - energy;
      energy = 0;
      }
    else {
      energy -= h[i + 1] - h[i];
      }
    }
  cout << money;

  return 0;
  }
