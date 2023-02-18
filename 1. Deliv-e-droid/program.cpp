#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int P, C;
  cin >> P >> C;

  int x = P * 50 - C * 10;

  if (P > C) {
    x += 500;
  }

  cout << x << "\n";

  return 0;
}