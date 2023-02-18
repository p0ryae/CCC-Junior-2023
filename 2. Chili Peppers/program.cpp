#include <bits/stdc++.h>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  unordered_map<string, int> map = {{"Poblano", 1500},  {"Mirasol", 6000},
                                    {"Serrano", 15500}, {"Cayenne", 40000},
                                    {"Thai", 75000},    {"Habanero", 125000}};

  int n;
  cin >> n;

  int max = 0;
  for (int i = 0; i < n; i++) {
    string pepper;
    cin >> pepper;

    max += map[pepper];
  }

  cout << max << "\n";

  return 0;
}
