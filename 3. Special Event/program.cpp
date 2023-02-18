#include <bits/stdc++.h>
using namespace std;

inline void fast_input(int &x) {
  x = 0;
  char a;
  while ((a = getchar()) < '0' || a > '9')
    ;
  while (a >= '0' && a <= '9') {
    x = (x * 10) + (a - '0');
    a = getchar();
  }
}

int main() {
  int x, all = 0, arr[6] = {};

  fast_input(x);

  bool beg = true;

  for (int i = 0; i < x; i++) {
    for (int a = 1; a <= 5; a++) {
      char c;
      cin >> c;
      if (c == 'Y')
        arr[a]++;
    }
  }

  for (int i = 1; i <= 5; i++) {
    all = max(all, arr[i]);
  }

  for (int i = 1; i <= 5; i++) {
    if (arr[i] == all) {
      if (!beg)
        cout << ',';
      cout << i;
      beg = false;
    }
  }

  cout << '\n';

  return 0;
}